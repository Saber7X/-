#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
long long int jing[50005]={inf};
long long int pan[50005]={inf};
using namespace std;
int main()
{
	long long int n,m;
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&jing[i]);
			if(jing[i]>jing[i-1]&&i!=0)
			{
				jing[i]=jing[i-1];
			}
			
		}
		int cnt=0;
		/*for(int i=0;i<n;i++)
		{
			printf("%lld ",jing[i]);
		}*/
		//m盘子数，n井高度
		long long int x; 
		long long int a=n-1;
		cnt=0;
		for(int i=0;i<m;i++)//盘子 
		{
			scanf("%lld",&x);
			for(;a>=0;a--)
			{
				if(x<=jing[a])
				{
					a--;
					cnt++;
					break;
				}
			}
		}
		printf("%lld\n",cnt);
	}
	
	return 0;
}
