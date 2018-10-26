#include<bits/stdc++.h>
using namespace std;
#define n 4 
#define m 4

void printMatrix(int arr[n][m]){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;

}

void zeromatrix(int arr[n][m]){
	bool row = false;
	bool column = false;
	for(int i = 0;i< n ;i++){
		if(arr[i][0] == 0)
			column = true;
		for(int j = 0;j<m ;j++){
			if(arr[0][j]==0)
				row = 0;
			if(arr[i][j] == 0){
				arr[0][j] = 0;
				arr[i][0] = 0;
			}
		}
	}
	cout<<"After Step 1: "<<endl;
	printMatrix(arr);

	for(int i=1; i < n;i++){
		if(arr[i][0] == 0){
			for(int j = 1;j< m ;j++){
				arr[i][j] = 0;
			}
		}
	}
	cout<<"After Row 0: "<<endl;
	printMatrix(arr);

	for(int i=1; i < m;i++){
		if(arr[0][i] == 0){
			for(int j = 1;j< n ;j++){
				arr[j][i] = 0;
			}
		}
	}
	cout<<"After Row and  column 0 :"<<endl;
	printMatrix(arr);
	cout<<"Final Nuulify: "<<endl;
	if(row == true)
		for(int i=0; i < m ;i++)
			arr[0][i] = 0;
	if(column == true)
		for(int i=0; i < n ;i++)
			arr[i][0] = 0;
	printMatrix(arr);
}

int main(){
	int arr[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		cin>>arr[i][j];
	cout<<endl;
	cout<<"your matrix :"<<endl;
	printMatrix(arr);
	zeromatrix(arr);
	return 0;
}