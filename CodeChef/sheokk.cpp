#include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int z,a;
 	cin>> a ;
 	for(z=0;z<a;z++)
 	{
 		long n;
 		cin>>n;
 		vector <long> v;
 		long j,i=0,l=-1;
 		long diff;
 		long k;
 		while(1)
 		{
 			k=pow(2,i);
			v.push_back(k);
			if(n-k==0 )
				{
					diff=0;
					break;
				}
 			if(n-k<0)
 			{
 				diff=n-l;
 				break;
			 }
			 l=k;
			 ++i;
		 }
		 long mini;
		  mini=diff;
		  for(int j=0;j<v.size();j++)
		 {
		 	//cout<<v[j];
		 }
		 //cout<<'\n';
		 for(j=0;j<v.size();j++)
		 {

		 	long val=abs(diff-v[j]);
		 	if(val<mini && v[j]!=l)
		 		mini=val;

			 else if(diff-v[j]<=0 && mini!=diff)
		 		break;
		 }

		 if(l==v[j])
		mini=min(mini,k+1-n);
		else
		mini=min(mini,k-n);
		 if(diff==0)
		 	mini=1;
		if(n==1)
			mini=2;

		 cout<<mini<<endl;
 	}
 	return 0;
 }
