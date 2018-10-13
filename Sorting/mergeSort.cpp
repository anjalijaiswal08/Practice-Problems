#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<=n;i++)
     cout<<arr[i]<<" ";
  cout<<endl;
}

void merge(int arr[],int low,int mid,int high){
     int helperArr[high];
     for(int i=low;i<=high;i++){
       helperArr[i] = arr[i];
     }
     int left =low;
     int right = mid+1;
     int  curr = low;
     while(left<=mid && right <=high){
       if(helperArr[left]<=helperArr[right]){
         arr[curr] = helperArr[left];
         left++;
       }
       else{
         arr[curr] = helperArr[right];
         right ++;
       }
       curr++;
     }
    int remaining = mid- left;
    for(int i=0;i<=remaining;i++){
      arr[curr+i] = helperArr[left+i];
    }

}

void mergesort(int arr[],int l,int r){
  if(l<r){
      int  mid = l+(r-l)/2;
      mergesort(arr,l,mid);
      mergesort(arr,mid+1,r);
      merge(arr,l,mid,r);
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
     cin>>arr[i];
  cout<<"\nOur Unsorted Array : ";
  printArray(arr,n-1);
  mergesort(arr,0,n-1);
  cout<<"Sorted Array : ";
  printArray(arr,n-1);
  return 0;
}
