#include<iostream>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int a,b,count=0;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    if((b-a)>5)
     count++;
  }
  cout<<count<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--)
   solve();
  return 0;
}
