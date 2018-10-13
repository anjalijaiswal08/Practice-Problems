#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int A[10][10];
	memset(A,0,sizeof(A));
	int x,y,nodes,edges;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++){
		cin>>x>>y;
		A[x][y] = 1;
	}
	
	int i=0,j=0;
	while(i<edges){
		while(j<edges){
			if(A[i][j] == 1)
				cout<<"Edge Between"<<i<<"and"<<j<<endl;
			else
				cout<<"No Edges between"<<i<<"and"<<j<<endl;
			j++;
		}
		i++;
	}
	return 0;
}