#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void solve(){
  long long int n;
  cin>>n;
  long long int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  for(int i=0;i<n-1;i++){
  long long int k= abs(arr[i]-arr[i+1]);
    arr[i]=k;
  }
  sort(arr,arr+n);
  cout<<arr[0]<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
