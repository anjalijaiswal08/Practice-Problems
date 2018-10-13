#include <iostream>
using namespace std;

struct StackNode{
  int data;
  struct StackNode* next;

};
struct StackNode *newNode(int data){
  struct StackNode *stackNode=(struct StackNode)malloc(sizeof(struct StackNode));
  stackNode->data=data;
  stackNode->next=NULL;
};
int isEmpty(struct StackNode *root){
  return !root;
}
void push(struct StackNode**root,int data){
  struct StackNode* stackNode=newNode(data);
  stackNode->next=*root;
  *root=stackNode;
}
int pop(struct StackNode** root){
  if(isEmpty(*root)){
    return -1;
  }
  struct StackNode* temp=*root;
  *root = (*root)->next;
  int popped=  temp->data;
  free(temp);
  cout<<popped;
  return popped;
}
int peak(struct StackNode* root){
  if(isEmpty(root))
    return -1;
  return root->data;
}
int main(){
  struct StackNode* root=NULL;
  int t;
  cin>>t;
  int data;
  while(t--){
    char c;
    cin>>c;
    switch(c){
      case 1:
      cin>>data;
      push(&root,data);
      break;
      case 2:
      pop(&root);
      break;
      case3:
      peak(root);
      break;
      default:
      break;
    }
  }
  return 0;
}
