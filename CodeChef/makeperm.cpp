#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
long long int N;
cin>>N;
unsigned long long int arr[N];
int c=0;
  for(long long int i=0;i<N;i++){
    cin>>arr[i];
  }
  int n= sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+n);
  for(long long int i=0;i<N;i++){
    if(arr[i]!=i+1)
     c++;
  }
  cout<<c<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--)
   solve();
  return 0;
}
