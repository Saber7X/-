#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[100000];
	while(scanf("%s",&x)!=EOF)
	{
		long long int ans[10086];
		long long int cnt=0;
		if(x[0]=='0')
		{
			printf("0");
		}
		else
		{
			long long int len=strlen(x);
			long long int sum=0;
			for(long long int i=0;i<len;i++)
			{
				sum+=x[i]-'0';
				if(i!=len-1)
				{
					sum*=10;
				}
			}
			while(sum!=0)
			{
				ans[cnt]=sum%2;
				sum/=2;
				cnt++;
			}
			
		}
		for(long long int i=cnt-1;i>=0;i--)
		{
			printf("%lld",ans[i]);
		}
		printf("\n");
	} 
	return 0;
}
