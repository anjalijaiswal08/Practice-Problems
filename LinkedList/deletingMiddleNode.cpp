#include<iostream>
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

void deleteNode(node * head){
     node * temp = head->next;
     head -> data = temp->data;
     head -> next = temp->next;
     delete temp;
     printlist(head);
}


int main(){
  int t,k;
  cin>>t>>k;
  CreateList(t);
  cout<<"Real list :";
  printlist(head);
  cout<<"K-th Node from last : ";
  deleteNode(head);
  cout<<endl;
  return 0;
}
