#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define M 10e9
#define  N 10e5
using namespace std;
long long int  cakes(long long int  arr[],long long int  n){
   long long int  count[100000]={0};
  for(int i=0;i<n;i++)
    count[arr[i]]++;
  sort(count,count+100000);
  return count[0];
}

int main(){
 long long int  t,n;
 long long int arr[1000000000];
 cin>>t;
 while(t--){
   cin>>n;
   for(int i=0;i<n;i++)
    cin>>arr[i];
    cakes(arr,n);
  }
return 0;
}
