#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a,b;
  int t;
  cin>>t;
  while(t--){
    int cntb;
    cin>>a>>b;
    for(int i=0;i<3;i++){
      if(a[i]=='o'||b[i]=='o'){
         cntb=0;
        for(int j=0;j<3;j++){
          if(j!=i){
            if(a[j]=='b'||b[j]=='b')
            cntb++;
            //cout<<cntb<<endl;
          }
        }
    }
  }
    if(cntb==2)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  }
  return 0;
}
