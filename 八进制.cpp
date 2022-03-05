#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	while(scanf("%lld",&x)!=EOF)
	{
		long int num[100866];
		long int cnt=0; 
		if(x==0)
		{
			printf("0\n");
		}
		else
		{
			while(x!=0)
		{
			num[cnt]=x%8;
			cnt++;
			x/=8;
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
