#include<iostream>
using namespace std;
void solve(){
  string s1;
  cin>>s1;
  int i=0,c =0;
  int n= s1.length();
  while(n--){
    if(s1[i]=='A'||s1[i]=='O'||s1[i]=='D'||s1[i]=='P'||s1[i]=='Q'||s1[i]=='R')
    c++;
    else if(s1[i]=='B')
    c+=2;
    i++;
  }
  cout<<c<<endl;
}

int main(){
int t;
cin>>t;
while(t--)
solve();
return 0;
}
