#include<iostream>
using namespace std;
int main(){
  int x,t;
  long long int n;
  cin>>t;
  while(t--){
    cin>>n;
    if(n==1)
    cout<<2<<endl;
    else{
    x = __builtin_popcount(n);
    if(x==1||x==3)
    cout<<1<<endl;
    else if(x==2)
    cout<<0<<endl;
  }

  }
  return 0;
}
