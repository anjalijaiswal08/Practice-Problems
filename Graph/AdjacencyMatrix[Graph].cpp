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
	if(A[2][3]==1){
		std::cout << "Edge Present Between 2 and 3" << '\n';
	}
	else{
		std::cout << "Edge Not Present btw 2 and 3" << '\n';
	}
	if (A[11][11]!=1) {
		/* code */
		std::cout << "Edge Not present Between 11 and 11" << '\n';
	}
	return 0;
}
