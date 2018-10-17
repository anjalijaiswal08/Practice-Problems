#include<iostream>
using namespace std;

typedef struct Node{
  int data;
  struct Node *next;
}node;

struct Node * head = NULL;
node * head1 = NULL;

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

void reverse(node *head){
  node *  curr = head, * prev = NULL, * next = NULL;
  while(curr  != NULL) {
     next = curr ->next;
     curr -> next = prev;
     prev = curr;
     curr = next;
  }       
  head1 = prev;
  cout<<"After reversing list : " ;
  printlist(head1);

}



void palindrome(){
  bool f = true;
  node * temp = head;
  node * temp1 = head1;
  while(temp != NULL && temp1 != NULL){
    if(temp1->data != temp->data)
      f = false;
    temp =  temp->next;
    temp1 = temp1->next;
  }
  if(f == false)
    cout<<"Not palindrome"<<endl;
  else
    cout<<"palindrome"<<endl;
}

int main(){
  int t,n;
  cin>>t;
  CreateList(t);
  cout<<"Real list :";
  printlist(head);
  reverse(head);
  palindrome();
  return 0;
}
