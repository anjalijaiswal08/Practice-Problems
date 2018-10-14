#include <iostream>
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void replaceSpace(char s[],int n=12){
	int spaceCount =0,index,i=0;
	for(i=0;i<n;i++){
		if(s[i] == ' ')
			spaceCount++;
	}
	index = n+spaceCount*2;
	if(index>MAX){
		return;
	}
	s[index] = '\0';
	for (int i =n-1; i >=0; i--)
	{
		/* code */
		if(s[i]== ' '){
			s[index-1] = '0';
			s[index - 2] = '2';
			s[index - 3] = '%';
			index = index -3;
		}
		else{
			s[index - 1] = s[i];
			index--;
		}
	}
  for (int i = 0; i < (2*spaceCount+n+1); ++i)
  {
  	/* code */
  	cout<<s[i];
  }
  cout<<endl;
}

int main(){
	char s[MAX];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>s[i];
	}
	/*for (int i = 0; i < n; ++i){
	cout<<s[i];}
	cout<<endl;*/
	replaceSpace(s,n);
	return 0;
}