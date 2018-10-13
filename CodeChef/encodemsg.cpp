#include<iostream>
#include<string>
using namespace std;
int main(){
int k;
cin>>k;
while(k--){
  int n;
string s1;
cin>>n>>s1;
if(n%2==0){
  	for(int i=0;i<n;i=i+2){
  		char t = s1[i];
  		s1[i]=s1[i+1];
  		s1[i+1]=t;
  }
}
else{
  for(int i=0;i<n-1;i=i+2){
    char t = s1[i];
    s1[i]=s1[i+1];
    s1[i+1]=t;
}
}
for(int i=0;i<n;i++){
s1[i] = 'z' + 'a' -s1[i];
}
cout<<s1<<endl;}
return 0;
}
