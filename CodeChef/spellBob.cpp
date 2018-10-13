#include<iostream>
#include<string>
using namespace std;
void fun(string s1,string s2){
  int arr[3]={0};
  int i=0,c=0,k,f=0;
  while(i<3){
    if(s1[i]=='b'||s2[i]=='b'){
      arr[i]=1;
      c++;
    }
    i++;
  }
  if(c==2){
    i=0;
    while(i<3){
      if(arr[i]==0){
        k=i;
      }
      i++;
    }
      if(s1[k]=='o'||s2[k]=='o')
        f=1;
    if(f==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
  else if(c==3){
    i=0;
    while(i<3){
      if(s1[i]=='o'||s2[i]=='o'){
      f=1;
      break;}
      i++;
    }
    if(f==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  }
  else
  cout<<"no"<<endl;
}

int main(){
  string s1,s2;
  int k,t;
  cin>>t;
  while(t--){
    cin>>s1>>s2;
    fun(s1,s2);
  }
  return 0;
}
