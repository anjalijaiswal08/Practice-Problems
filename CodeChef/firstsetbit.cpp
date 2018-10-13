#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n,c=0,f=0,s=0;
  cin>>n;
  while(n){
    s= n%2;
    c++;
    n=n/2;
    if(s==1){
      f =1;
      break;
    }
  }
  if(f==1){
    cout<<c<<endl;
  }
  else{
    cout<<"0"<<endl;
  }
}
return 0;
}
