#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		double sum=0.0;
		if(n==0) break;
		if(n<=4)
		{
			sum=10;
		}
		if(n>4&&n<=8)
		{
			sum=(n-4)*2+10;
		}
		if(n>8)
		{
			while(n>=8)
			{
				sum+=18;
				n-=8;
			}
			if(n<=4)
			{
				sum+=2.4*n;
			}
			else
			{
				sum+=(n-4)*2+10;
			}
		}
		if(sum-(int)sum==0)
		{
			printf("%d\n",(int)sum);
		}
		else
		{
			printf("%.1lf\n",sum);
		}
	}
	return 0;
}
