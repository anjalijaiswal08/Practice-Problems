#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char** argv)
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[14];
		memset(a,0,sizeof(a));
		int s=13;
		while(n)
		{
			a[s--]=(n%2);
			n/=2;
		}
		for(int i=0;i<14;i++)cout<<a[i];cout<<endl;
	}
	return 0;
}
