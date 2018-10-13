#include <iostream>
#include<string>
using namespace std;
float resd(string s1,int len){
    float average;
    float sum=0;
    int count[27] ={0};
    int arr[27] = {0};
    for(int i=0;i<len;i++){
        arr[(int)(s1[i]-'a')] = (int)s1[i];
        count[(int)(s1[i]-'a')]++;
    }
    for(int i =0;i<26;i++){
      if(arr[i]!=0&&count[i]!=0){
        sum=sum+arr[i]*count[i];
        }
    }
    average= (float)sum/(float)len;
    return average;
}

 int main() {
	//code
	string s1;
	int k;
	cin>>s1;
	k = s1.length();
  float res = resd(s1,k);
	printf("%0.2f",res);
	return 0;
}
