#include<bits/stdc++.h>
using namespace std;

map<long long int ,long long int> nb;

long long int fun(long long int n){
  long long int r;
  if(n==0)
   return 0ll;
  if(nb[n]>0)
   return nb[n];
  nb[n]=max(n ,fun(n/2)+fun(n/3)+fun(n/4));
   return nb[n];
}

int main(){
  long long int res,n;
  while(cin>>n)
    cout<<fun(n)<<endl;
  return 0;
}
