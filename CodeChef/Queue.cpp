#include<iostream>
using namespace std;

int queue[100],rear=0,front=0;

void enqueue(int queue[],int n,int &rear,int arraSize){
	if(rear == arraSize){
		cout<<"Overflow"<<endl;
	}
	else{
		queue[rear] = n;
		rear++;
	}
}

void dequeue(int queue[],int& front,int rear ){
	if(front == rear)
		cout<<"Underflow";
	else{
		queue[front ] = 0;
		front++;
	}
}

void frontElement(int queue[],int front){
	cout<<queue[front]<<endl;
}

void size(int front,int rear){
	cout<<(rear-front)<<endl;
}

bool isEmpty(int front,int rear){
	return (front==rear);
}
void printQueue(int queue[],int n){
	for(int i=0;i<n;i++){
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		enqueue(queue,data,rear,n);
	}
	enqueue(queue,45,rear,n+1);
	printQueue(queue,n+1);
	cout<<"After dequeue : ";
	dequeue(queue,front,rear);
	printQueue(queue,n+1);
	frontElement(queue,front);
	return 0;
}