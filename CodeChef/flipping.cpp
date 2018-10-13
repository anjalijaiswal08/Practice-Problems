#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
long flipping(long n){
  int arr[4];
  int t;
  cin>>t;
  long sum;
  while(t--){
    sum=0;
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=4;i++){
      arr[4-i]=n%2;
      n/2;
    }
    for(int i=0;i<4;i++)
      if(arr[i]==0)
         arr[i]=1;
      else
        arr[i]=0;
    for(int i=1;i<=4;i++){
      sum+=arr[4-i]*pow(2,(i-1));
    }
  }
  return sum;
}
int main(){
  int t;
  long num,n;
  cin>>t;
  while(t--){
    cin>>n;
  num=  flipping(n);
  cout<<num<<endl;
  }

  return 0;
}
