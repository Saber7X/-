#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;


int a[50005];
int dp[50005];

int main()
{
	a[0] = 0;
	a[1] = 1;
	int cnt = 2;
	while(a[cnt] <= (int)1e12)
	{
		a[cnt++] = a[cnt - 1] * 3;
	}
	
	a[cnt] = 6;cnt ++;
	while(a[cnt] <= (int)1e12)
	{
		a[cnt ++] = a[cnt - 1] * 6;
	}
	
  	int n,m,w,v,t;
  	scanf("%d",&t);

  	while(t--)
  	{
  		int x;
		scanf("%d",&x);
		memset(dp,-1,sizeof(dp));
		dp[0]=0;//要记得赋初值！！！背包容量为0时不能装东西，价值为0
  		for(int i=1;i<=cnt;i++)
  		{	
			for(int j = a[i]; j <= x; j++)//j的初值从w开始，j++的话，往后的dp[j]都会有dp[j-1]可用 （即不为-1） 
	  		{//体现了完全背包物品不限个数的特点 
	  			if(dp[j - a[i]] == -1) continue;//不能刚好装下 
	  			dp[j] = dp[j] > dp[j - w] + v ? dp[j] : dp[j - a[i]] + a[i];
			}	
		}
	  	if(dp[m] == -1) printf("NO\n");
	  	else printf("%d\n",dp[m]);
	}
  	return 0;
} 
