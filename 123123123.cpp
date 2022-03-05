#include<bits/stdc++.h> 
#define ll long long int
using namespace std;
int t,cnt=1,sum[100001],l,r;
long long int num[100001];
int main()
{
	//78998 100000
	scanf("%d",&t);
	for(int i=1;i<=446;i++)
	{
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)
			{
				sum[cnt]=j;
				num[cnt]=num[cnt-1]+sum[cnt];
				cnt++;
			}
		}
		else
		{
			for(int j=i;j>=1;j--)
			{
				sum[cnt]=j;
				num[cnt]=num[cnt-1]+sum[cnt];
				cnt++;
			}
		}
	}
	int flag=t;
	while(1)
	{
		if(t==0)
		{
			break;
		}
		if(t!=flag)
		{
			printf("\n");
		}
		scanf("%d %d",&l,&r);
		printf("%lld",num[r]-num[l-1]);
		t--;
	}		
	return 0;
}
