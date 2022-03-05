#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m;
	while(scanf("%lld",&m)!=EOF)
	{
		
		if(m==0)
		{
			break;
		}
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		long long int num[100866];
		long long int cnt=0; 
		long long int x=a+b;
		if(x==0)
		{
			printf("0\n");
		}
		else
		{
			while(x>=0)
			{
				num[cnt]=x%m;
				cnt++;
				x/=m;
			}
			for(int i=cnt-1;i>=0;i--)
			{
				printf("%lld",num[i]);
			}
			printf("\n");
		}
		
	}
	return 0;
}
