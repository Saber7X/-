#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a=5;//±ß³¤
	long long int b=1;
	long long int sum=0;
	while(a>0)
	{
		long long int c=1;
		if(a==20210411)
		{
			for(long long int i=0;i<a;i++)
			{
				sum+=b;
				b+=2; 
			}
		}
		for(long long int i=0;i<a;i++)
		{
			sum+=i;
		}
		a--;
		 
	}
	long long int d=1e9+7;
	//printf("%lf\n",1e9+7);
	printf("%lld",sum%1000000007);
	
} 
