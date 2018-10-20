//Max of two numbers without using if-else and any comparison operator..
//Without Taking Overflow condition

#include <bits/stdc++.h>
using namespace std;

int flip(int m){
	return (1^m);
}

int sign(int m){
	return (m >> 31 & 0x1);
}

void max(int a,int b){
	int k = sign(a-b);
	int q = flip(k);
	int res = a*k + b*q;
	cout<<"Max Of "<<a<<"and"<<b<<"is :"<<res<<endl;
}

int main(){
	int a,b;
	cin>>a>>b;
	max(a,b);
	return 0;
}