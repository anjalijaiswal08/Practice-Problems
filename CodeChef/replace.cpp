#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1;
int t;
cin>>t;
while(t--){
cin>>s1;
int n = s1.length();
  if(n%2==0){
  	for(int i=0;i<=n-2;i=i+2){
  		char t = s1[i];
  		s1[i]=s1[i+1];
  		s1[i+1]=t;
  }

  }
  else{
  	for(int i=0;i<n-2;i=i+2){
  	char t = s1[i];
  		s1[i]=s1[i+1];
  		s1[i+1]=t;
  }
}
for(int i=0;i<n;i++){
s1[i] = char(122-((int)(s1[i])-97));
}
cout<<endl<<s1<<endl;
}
return 0;
}
