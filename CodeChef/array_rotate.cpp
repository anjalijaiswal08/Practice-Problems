#include <iostream>
using namespace std;
void printarray(int arr[],int n);
void rotateLeft(int arr[],int n,int d){
  int temp[d];
  for(int i=0;i<d;i++)
    temp[i] = arr[i];
  printarray(temp,d);
  cout<<endl;
  for(int i=d;i<n;i++)
    arr[i-d] = arr[i];
  printarray(arr,n);
  cout<<endl;
  for(int i=d;i<n;i++)
   arr[i] = temp[i-d];
  printarray(arr,n);
  cout<<endl;
  return;

}
void printarray(int arr[],int n){
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[4],d;
  cin>>d;
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }
  //int n=arr.size();
  rotateLeft(arr,4,d);
//  printarray(arr,10);
  return 0;
}
