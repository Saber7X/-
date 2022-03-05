#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	long int n=0;
	scanf("%lld %lld",&a,&b);
	long long int num[150006]={0};
		for(long long int i=0;i<=1000;i++)
		{
			for(long long int j=0;j<=1000;j++)
			{
				num[i*a+b*j]++;
				//printf("%d ",i*j);
			}
		}
	for(long long int i=104091;i>=0;i--)
	{
		if(num[i]==0)
		{
			printf("%lld",i);
			break;
		}
	}
	return 0;
}
