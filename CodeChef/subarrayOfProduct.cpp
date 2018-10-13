#include<bits/stdc++.h>
using namespace std;
#define M 1000
int subarray(int arr[],int k,int n){
  int start=0,endval=0,p=1,res=0,countones;
  while(endval<n){
    p*=arr[endval];
    if(p>k){
      while(start<endval && p>k){
      p/=arr[start];
      start++;
      }
    }
    if(p==k){
       countones=0;
      while(endval<n && arr[endval]==1 ){
        countones++;
        endval++;
      }
    }
    res+=(countones+1);
    while(start<=endval&&arr[start]==1){
      res+=(countones+1);
      start++;
    }
    p/=arr[start];
    start++;
  }
return res;
}

int main(){
  int t;
  cin>>t;
  while (t--){
    int n,k;
    cin>>n>>k;
    int arr[M];
    memset(arr,0,sizeof(arr)/sizeof(int));
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int res = subarray(arr,k,n);
    cout<<"N"<<endl;
    cout<<res<<endl;
  }
  return 0;
}
