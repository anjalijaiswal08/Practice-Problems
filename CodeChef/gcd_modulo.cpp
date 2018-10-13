#include<bits/stdc++.h>
using namespace std;

const int  M = 1e9+7;
 long long   number(long long  a,long long  b,long long mod=M){
    long long  res=1;
  while(b){
    if(b&1)
     res=((__int128)res*a)%mod;
     a=((__int128)a*a)%mod;
     b>>=1;
  }
  return res;
}

int main(){
  int t;
  cin>>t;
   long long int  A,B,N,res;
    long long int  a,b;
  while(t--){
    cin>>A>>B>>N;
        if(A==B)
        cout<<(number(A,N)+number(B,N))%M<<endl;
        else{
          res = (number(A,N,A-B)+number(B,N,A-B))%(A-B);
          cout<<__gcd(res,A-B)<<endl;
        }
    }
  return 0;
}
