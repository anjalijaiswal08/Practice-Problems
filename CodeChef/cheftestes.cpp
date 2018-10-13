#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      string str[7];
      int j=0;
        int N,M;
        cin>>N>>M;
        while(N--){
            string s;
            cin>>s;
            char arr[M];
            int i=0;
            int k=1;
            while(i<M){
                cin>>arr[i];
                k=k&arr[i];
                i++;
              }
              if(s=="correct"){
                if(k==0)
                  str[j]="I";
                else if(k==1)
                  str[j]="F";
              }
              else if(s=="wrong"){
              if(k==0)
                str[j]="I";
              else if(k==1)
                str[j]="W";
             }
             j++;
        }
        for(int i=0;i<j;i++){
          if(str[i]=="I")
           cout<<"INVALID"<<endl;
           break;
          if(str[i]=="W")
           cout<<"WEAK"<<endl;
           break;
           cout<<"FINE"<<endl;
           break;
        }
  }
return 0;
}
