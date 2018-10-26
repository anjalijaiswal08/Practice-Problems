#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void compress(string s){
	int count = 0;
	string s1 = " ";
	bool t = false;
	int j=0;
	string s2;
	for(int i=0;i<s.length();i++){
		s1 += s[i];
		count+=1;
		while(i+1<s.length() && s[i] == s[i+1]){
			count++;
			i++;
		}
		s2 = to_string(count);
		s1 += s2;
		count = 0;
	}
	cout<<s1<<endl;
}

int  main(){
	string s;
	cin>>s;
	compress(s);
	return 0;
}