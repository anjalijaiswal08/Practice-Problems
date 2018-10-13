#include<iostream>
using namespace std;

int gcd(int a,int b){
  if(a==0)
   return b;
  else
    return gcd(b%a,a);
}

void rotate(int arr[],int n,int k){
    int i=0;
    while(i < gcd(n,k)){
      int temp = arr[i];
      int j=i;
      while(1){
        int d = j+k;
        if(d >= n)
          d-=n;
        if(d == i)
           break;
        arr[j] = arr[d];
        j=k;
      }
      arr[j] = temp;
    }
}

void printArray(int arr[],int n){
  for(int i=0;i<=n;i++)
     cout<<arr[i]<<" ";
  cout<<endl;
}

int main(){
  int n,k;
  cout<<"\nEnter Size Of Array";
  cin>>n;
  int arr[n];
  cout<<"\nEnter Elements Of Array : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"\nEnter No. Of Roatation : ";
  cin>>k;
  cout<<"\n Array Before rotation : ";
  printArray(arr,n-1);
  rotate(arr,n-1,k);
  cout<<"\nArray After rotation : ";
  printArray(arr,n-1);
  return 0;
}
