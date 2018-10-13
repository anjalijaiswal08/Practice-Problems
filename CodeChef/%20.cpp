#include<iostream>
#include <string.h>
using namespace std;

int main(){
string str;
int n;
cin>>n;
for(int i=0;i<n;i++){
  cin>>str[i];
}
for(int i=0;i<n;i++){
  if(str[i]==" "){
  str[i] = "%";
  str[i+1]="2";
  str[i]="3"
  }
  }
for(int i=0;i<n;i++){
  cout<<str[i];
}
return 0;
}
