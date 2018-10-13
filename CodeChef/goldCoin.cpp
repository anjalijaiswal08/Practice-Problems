#include<bits/stdc++.h/>
using namespace std;
#define lon long long int
map<lon,lon>arr;

lon func(lon n){
     if(n==0)
          return  0;
     if(arr[n]>0)
          return arr[n];
     else{
          arr[n] = max(n,(func(n/2)+func(n/3)+func(n/4)));
          return arr[n];
     }
}

int main(){
     lon n;
     while(cin>>n){

        cout<<func(n)<<endl;
        }
}
