#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

vector<int> v[10];
/*int queue[100],front=0,rear=0,arraSize=100;

void enqueue(int queue,int rear,int data,int arraSize){
	if(rear==arraSize){

	}
	else{
		queue[rear] = data;
		rear++;
	}

}
void bfs()

void dequeue(int queue[],int& front,int rear ){
	if(front == rear)
		cout<<"Underflow";
	else{
		queue[front ] = 0;
		front++;
	}
}
*/

int main(int argc, char const *argv[])
{
	/* code */
	int x,y,edges,nodes;
	cin>>nodes>>edges;
	for (int i = 0; i < edges; ++i)
	{
		/* code */
		cin>>x>>y;
		v[x].push_back(y);
	}
	for (int i = 0; i < nodes; ++i)
	{
		/* code */
		cout<<"Adjacency list of Node"<<i<<" : ";
		for (int j = 0; j < v[i].size(); ++j)
		{
			/* code */
			if (j == v[i].size()-1)
			{
				/* code */
				cout<<v[i][j]<<endl;
			}
			else
				cout<<v[i][j]<<"-->";
		}
	}
	return 0;
}