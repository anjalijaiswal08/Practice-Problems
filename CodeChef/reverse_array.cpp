#include<iostream>
using namespace std;

void printArray(int arr[],int size){
  int i=0;
  while(i<size){
    cout<<arr[i];
    i++;
  }
}

int *reverse(int arr[],int start,int end){
  int digits= end+1;
  while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  return arr;
}

 /*void sumArray(int *arr1,int *arr2,int digits1,int digits2){
   if digits1 ==digits2{
      int sum[digits1+1];
      for(pint i=digits1;i<0;i--){
        int k = arr3[i] +arr4[i];
        if(k >9){

        }
       sum[digits1- i ] = k;
      }

   }
   if(digits1 > digits2){
     int sum[digits1+1];

   }
   else{
      int sum[digits2+1];

   }

 }
*/

int main(){
  int arr1[100];
  int arr2[100];
  int digit1 , digit2;
  cout<<"Enter Number of digits For Your Numbers"<<endl;
  cin>>digit1>>digit2;
  cout<<"Enter Your First  Number"<<endl;
  for(int i=0;i<digit1;i++)
    {cin>>arr1[i];}
  cout<<"Enter Your Second Number"<<endl;
  for(int i=0;i<digit2;i++)
    {  cin>>arr2[i];}
  cout<<"Your First Number: ";
  printArray(arr1,digit1);
  cout<<endl;
  int *arr3 = reverse(arr1,0,digit1-1);
  cout<<endl;
  cout<<"Your Second Number: ";
  printArray(arr2,digit2);
  cout<<endl;
  int *arr4 = reverse(arr2,0,digit2-1);
  /*sumArray(arr3,arr4,digit1,digit2);*/
  return 0;
}
