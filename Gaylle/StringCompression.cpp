#include <iostream>
#include <stdlib.h>
#include<map>
using namespace std;

map <char,int> m;
map<char,int> :: iterator it;

int main(){
	string s1;
	cin>>s1;
	for (int i = 0; i < s1.length(); ++i)
	{
		/* code */
		m[s1[i]]++;
	}
	for (it = m.begin(); it!= m.end() ; it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
	cout<<m.size()<<"map size"<<" "<<s1.length()<<": len of str"<<endl;
	char s2[2*m.size()+1];
	if((2*m.size())>=s1.length()){
		cout<<s1<<endl;
	}
	else{
		 int i=-1;
		for (it = m.begin(); it!= m.end() ; it++)
			{
				/* code */
				s2[++i] = it->first;
				//i++;
				//s2[i] = it->second;
			}
			//s2[i]=NULL;
			cout<<s2<<endl;
	}
	return 0;
}