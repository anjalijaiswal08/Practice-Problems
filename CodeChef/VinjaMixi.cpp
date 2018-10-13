#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k,s=0;
  cin>>n>>k;
  int arr[n];
  int i=n;
  while(n--){
    cin>>arr[i];
  }
  for(i=0;i<n;i++){
    if(i%2==0){
      if(s>=0){
        s=s+arr[i];
      }
      else if(s<0){
        s=s-arr[i];
     }
    }
    else{
      if(s<0)
      s=s+arr[i];
    else if(s>0)
     s=s-arr[i];
    }
  }
  cout<<s<<endl;
  if(abs(s)>=k)
   cout<<1<<endl;
  else if(abs(s)<k)
   cout<<2<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--)
   solve();
  return 0;
}
