#include<bits/stdc++.h>
using namespace std;

int counthree(long long int n){
  unsigned  long long int count=0;
  while(n>0){
    if(n%10==3)
     count++;
    n=n/10;
  }
  if(count>=3)
   return 1;
  else
   return 0;
}

void solve(){
  unsigned long long int  n;
  cin>>n;
  n =n+1;
  while(!counthree(n)){
    n++;
  }

  cout<<n<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--)
   solve();
  return 0;
}
