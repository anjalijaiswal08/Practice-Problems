#include<iostream>
using namespace std;
int main(){
int t;
int j=0,k=0;
int arr1[1000];
int arr2[1000];
int n1;
int n2;
cin>>t;
while(t--){
  cin>>n1;
  cin>>n2;
for(int i=0; i < n1 ; i++){
  cin>>arr1[i];
  k+= arr1[i];
  }
for(int i=0; i < n2 ; i++){
  cin>>arr2[i];
  j+= arr2[i];
}
if(j>k){
  cout<<"C2";
}
else
cout<<"C1";
}
return 0;
}
