#include<bits/stdc++.h>
using namespace std;
const int N=1000001;
long int prime[N];
bool res[N];long int cnt=0;
long int n;//·¶Î§
void findprime()
{
	
	for(int i=2;i<=n;i++)
	{
		if(res[i]==0)
		{
			prime[cnt]=i;
			cnt++;
			//printf("%d ",i);
		
			for(int j=i*i;j<=n;j+=i)
			{
				res[j]=1;
			}
		}
	}
}
int main()
{
	long int q;//Ñ¯ÎÊq¸öÊý
	
	long int num[N];
	scanf("%d %d"&n,&q);
	findprime();
	
	for(int i=0;i<q;i++)
	{
		scanf("%ld",&num[i]);
	}
	for(int i=0;i<q;i++)
	{
		printf("%ld\n",prime[num[i]-1]);
	}
	return 0;
}
