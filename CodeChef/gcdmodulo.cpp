#include<bits/stdc++.h>
using namespace std;

long long int M=10e9+7;

 long long int  number(long long int  x ,long long int y){
  long long int res;
  if(y==0)
  return 1LL;
  res = number(x,y/2);
  if(y%2==0)
  return ((res%M)*(res%M))%M;
  else
  return ((((res%M)*(res%M))%M)*(x%M))%M;
}

long long int  gcd(long long int  a,  long long int  b){
  if(a==0)
  return b;
  else
    gcd((b%a)%M,a%M);
}

int main(){
  int t;
  cin>>t;
   long long int  A,B,N,a,b,c,k,res;
  while(t--){
    cin>>A>>B>>N;
        a = llabs((A%M-B%M))%M;
        b = number(A,N);
        c= number(B,N);
        k =(b%M+c%M)%M;
        res = gcd(k,a);
        cout<<res<<endl;
      }
  }
}
  return 0;
}
