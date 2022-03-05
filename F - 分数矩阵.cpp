#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	
	while(scanf("%lld",&n)!=EOF)
	{
		double sum[50005]={0.0};
		if(n==0)
		{
			break;
		}
		int i=2;
		sum[1]=1.0; 
		double a=2.0;
		double summ=0.0;
		while(i<=n)
		{
			sum[i]=sum[i-1]+2.0/a;
			i++;
			a+=1.0;
		}
		for(int i=1;i<=n;i++)
		{
			summ+=sum[i];
		}
		printf("%.2lf\n",summ);
	
		
	}
	return 0;	
}
	

