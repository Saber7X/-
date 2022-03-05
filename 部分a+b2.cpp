#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,da,b,db;int suma=0,sumb=0;
	scanf("%lld %lld %lld %lld",&a,&da,&b,&db);
	
		while(a>0)
		{
			if(a%10==da)
			{
				suma*=10;
				suma+=da;
			}
			a/=10;
		}
		while(b>0)
		{
			if(b%10==db)
			{
				sumb*=10;
				sumb+=db;
			}
			b/=10;
		}
	printf("%lld",suma+sumb);
	
	return 0;
}	
