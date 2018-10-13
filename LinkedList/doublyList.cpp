#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
};

struct Node head;

struct Node* createNode(int data){
  struct Node temp = new Node;
  temp->data = data;
  temp->next = NULL:
  return temp;
}


int main(){
  int n;
  while (cin>>n) {
    /* code */
    CreateList(n);
  }
  return 0;
}
