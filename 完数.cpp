#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int yinzi[1000]; 
	scanf("%d",&n);
	for(int i=6;i<=n;i++)
	{
		int cnt=0; 
		int x=i;
		int t=2;
		if(i==1||i==2||i==3||i==4||i==5)
		{
			continue;
		}
		while(1)
		{
			if(x%t==0)
			{
				 yinzi[cnt]=t;
				 cnt++;
				 x/=t;
			}
			if(x%t!=0)
			{
				t++;
			}
			if(x==1)
			{
				yinzi[cnt]=1;
				cnt++;
				break;
			}
		}
		int sum=0;
		for(int j=0;j<cnt;j++)
		{
			sum+=yinzi[i];
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
 } 
