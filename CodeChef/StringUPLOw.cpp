#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  char str[101]=" ";
  int i=0,j=0;
  for(int i=0;i<s.length();i++){
    if(s[i]>='A' && s[i]<='Z')
    str[j++] = s[i];
  }
  for(int i=0;i<s.length();i++){
    if(s[i]>='a' && s[i]<='z')
    str[j++] = s[i];
  }
  str[j]='\0';
  for(int i=0;i<j;i++)
  cout<<str[i];
  cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
