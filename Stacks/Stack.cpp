#include <iostream>
using namespace std;

typedef struct StackNode
{
	int data;
	struct StackNode * next;
	
}Snode;

Snode * root = NULL;

Snode * newNode(int data){
	Snode * snode = new Snode;
	snode->data = data;
	snode->next = NULL;
	return snode;
}


int isEmpty(Snode * root){
	return !root;
}

Snode * push(int data){
	Snode * node = newNode(data);
	node->next = root;
	root = node;
	cout<<data<<" Pushed To stack\n";
	return root;
}

int pop(Snode * root){
	if(isEmpty(root))
		return -1;
	Snode * temp = root;
	root = root->next;
	int popped = temp->data;
	delete temp;
	return popped;
}

int peak(Snode * root){
	if(isEmpty(root))
		return -1;
	else
		return root->data;
}

void printStack(Snode * root){
	Snode * temp = root;
	cout<<endl;
	cout<<"YOUR STACK : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	Snode * ROOT = NULL;
	int n;
	cin>>n;
	int i=0,data;
	while(i<n){
		cin>>data;
		ROOT = push(data);
		i++;
	}
	printStack(root);
	return 0;
}