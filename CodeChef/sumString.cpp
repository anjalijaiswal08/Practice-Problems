#include<iostream>
using namespace std;
float resd(string s1,int len){
  float average,sum=0;
  for(int i=0;i<len;i++){
    sum+=int(s1[i]);
  }
  average=sum/len;\
  return average;
}
int main(){
  string s1;
	int k;
	cin>>s1;
	cout<<endl;
	k = s1.length();
  float res = resd(s1,k);
  printf("%.2f",res);
	return 0;
}
