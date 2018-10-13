#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  ll int n,m,a,b;
  cin>>n>>m;
  ll int arr1[n],arr2[n],arr3[m];
  map <int,int> order;
  for(int i=0;i<n;i++){
      cin>>arr1[i]>>arr2[i];
  }
  for(int i=0;i<m;i++){
    cin>>arr3[i];
  }
  sort(arr3,arr3+m);
  sort(arr1,arr1+n);
  sort(arr2,arr2+n);
  int k = arr2[n-1]={0};
  int arr4[2*n];
  int j=0,l=0,r=0;
  for(int i=0;i<(2*n-1);i++){
    if(arr1[l]<arr2[r]){
       arr4[i] = arr1[l];
       l++;
    }
    else{
      arr4[i] = arr2[r];
       r++;
     }
  }

}



int main(){
  int t;
  cin>>t;
  while(t--)
     solve();
  return 0;
}
