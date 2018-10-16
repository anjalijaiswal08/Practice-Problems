#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
  int data;
  struct Node *next;
}node;

struct Node * head = NULL;


struct Node* createNode(int data){
  struct Node * temp = new Node;
  temp->data = data;
  temp->next = NULL;
  return temp;
}

void printlist(struct Node * head){
  struct Node * temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

struct Node * CreateList(int n){
  struct Node * temp;
  struct Node * p = NULL;
  int data;
  for(int i=0;i<n;i++){
  cin>>data;
  temp = createNode(data);
  if(head == NULL){
    head = temp;
  }
  else{
    p = head;
    while(p->next != NULL){
      p = p->next;
    }
    p->next = temp;
  }
}
 return head;
}

void duplicate(node * head){
	node * temp, * temp1;
	temp = head;
	while(temp != NULL){
		temp1 = temp;
		while(temp1->next != NULL){
			if(temp1 ->next->data == temp->data){
				temp1->next = temp1->next->next;
			}
			else{
				temp1 = temp1->next;
			}
		}
		temp = temp->next;
	}
	printlist(head);
}

int main(){
  int t,n;
  cin>>t;
  CreateList(t);
  cout<<"Real list :";
  printlist(head);
  cout<<"After Removal Of Duplicates: ";
  duplicate(head);
  return 0;
}
