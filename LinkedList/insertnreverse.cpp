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

void insertbegin(int data){
   node * newNode = createNode(data);
   newNode -> next = head;
   head = newNode;
   cout<<"After Insertion At Beggining : ";
   printlist(head);
}

void insertLast(int data){
  node * temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  node * newNode = createNode(data);
  temp -> next = newNode;
  newNode -> next = NULL;
  cout<<"After Insertion At last : ";
  printlist(head);
}

void insertAfter(int data,int n){
  node * temp = head, * prev = head;
  int c = 0;
  temp = temp->next;
  while(temp ->next != NULL && c < n-1){
    temp = temp->next;
    prev = prev->next;
    c++;
  }
  node * newNode = createNode(data);
  prev -> next = newNode;
  newNode -> next = temp;
  cout<<"Insertion after "<<n<<"nodes : ";
  printlist(head);
}

void reverse(node *head){
  node *  curr = head, * prev = NULL, * next = NULL;
  while(curr -> next != NULL) {
     next = curr ->next;
     curr -> next = prev;
     prev = curr;
     curr = next;
  }       
  head = prev;
  cout<<"After reversing list : " ;
  printlist(head);

}

int main(){
  int t,n;
  cin>>t;
  CreateList(t);
  cout<<"Real list :";
  printlist(head);
  insertbegin(0);
  insertLast(7);
  insertAfter(00,4);
  reverse(head);
  return 0;
}
