#include<iostream>
using namespace std;
int BinarySearch(int arr[],int low,int high,int num){
  while(low<=high){
  int mid = low+(high-low)/2;
  if(num==arr[mid])
    return mid;
   if(arr[mid]>num)
    high = mid-1;
  if(arr[mid]<num)
    low =  mid+1;
  }
  return -1;
}
int main(){
  int n,num;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<"Enter Number To Search"<<endl;
  cin>>num;
  cout<<endl;
  int result = BinarySearch(arr,0,sizeof(arr)/sizeof(arr[0])-1,num);
  if(result==-1)
  cout<<"No. not Found"<<endl;
  else
  cout<<"No. Found at:"<<result;
  return 0;
}
