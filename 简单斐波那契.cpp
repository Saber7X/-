#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=1;
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d",a);
	}
	else if(n==2)
	{
		printf("%d ",a);
		printf("%d",b);
	}
	else
	{
		printf("%d ",a);
		printf("%d ",b);
		for(int i=2;i<n;i++)
		{
			int c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
	return 0;
}
