#include <iostream>
#include<string>
using namespace std;
int main(){
  string s1;
  cin>>s1;
  for(int i=0;i<s1.length();i++){
    for(int j=1;i<s1.length();j++){
      cout<<s1[i]<<s1[j];

    }

  }
}
