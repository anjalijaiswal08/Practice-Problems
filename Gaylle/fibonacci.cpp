//fibonacci using Recursion

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	else {
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}

int main(){
	int n;
	cin>>n;
	int k = fibonacci(n);
	cout<<k<<endl;
	return 0;
}