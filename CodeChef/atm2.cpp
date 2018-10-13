#include<iostream>
using namespace std;

void solve(){
  int N;
  long long int K;
  cin>>N>>K;
  long long int arr[N];
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  for(int i=0;i<N;i++){
    if(K >= arr[i]){
      cout<<1;
      K-=arr[i];
    }
    else
      cout<<0;
  }
  cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--)
   solve();
  return 0;
}
