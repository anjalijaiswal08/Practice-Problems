#include <iostream>
#include<string>
using namespace std;
const int CHARS=26;
void deletion(string a,string b){
  int count1[CHARS]={0};
  int count2[CHARS]={0};
  for(int i=0;i<a.length();i++)
    count1[(int)(a[i]-'a')]++;
  for(int i=0;i<b.length();i++)
    count2[(int)(b[i]-'a')]++;
    int k=0;
  for(int i=0;i<26;i++)
     k += abs(count1[i]-count2[i]);
  cout<<k;
}
int main(){
  string a,b;
  cin>>a>>b;
  deletion(a,b);
  return 0;
}
