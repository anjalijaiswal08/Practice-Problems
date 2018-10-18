//fibonacci 
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int memo[]){
	if (n == 0 || n== 1)
		return n;
	if(memo[n] == 0){
		memo[n] = fibonacci(n-1, memo) + fibonacci(n-2, memo);
	}
	return memo[n];
}

int fibonacci(int n){
	return fibonacci(n , new int[n+1]);
}

int main(){
	int n;
	cin>>n;
	int k = fibonacci(n);
	cout<<k<<endl;
	return 0;
}