#include <stdio.h>

int main(void) {
	// your code goes here

	int t;
	scanf("%d", &t);
	while(t-->0)
	{
		int n,k,s,x,y,i,flag;
		scanf("%d%d%d", &n,&k,&s);
		x=n/k;
		y=n%k;

		if(s<6 || s==6)
		{
		if(k>n)
		flag=0;
		else if(n==k && 6>=s)
		flag=2;
		else if(n>k && 6>=s)
		flag=3;
		}

		else
		{

		for(i=7;i<=s;i++)
		{
		    if(k>n)
		    flag=0;
			else if(i%7==0 && (i-1)%x==0 && n>=k)
			flag=0;
			else
			flag=1;

		}

		}

		if(flag==0)
		printf("-1");
		else if(flag==2)
		printf("%d", s);
		else if(flag==3)
		printf("%d", ((s*k)/n)+1);
		else
		printf("%d", ((s/x)+1));
		printf("\n");
	}

	return 0;
}
