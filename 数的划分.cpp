#include<bits/stdc++.h>
using namespace std;
int n,k;
int num[1000000];
int resa[1000000]={0};
int resb[1000000]={0};
int resc[1000000]={0};
int res[1000000]={0};
int ans[1000000];
int c[1000000]={0};
int cnt=0;
void dfs(int u)
{
	if(u>k)
	{
		sort(ans,ans+k+1);
		/*for(int i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;*/
		//cnt++;
		int sum=0;
		for(int i=1;i<=k;i++)
		{
			sum=sum*10+ans[i];
		}
		if(c[sum]==0)
		{
			cnt++;
			//cout<<sum<<endl;
			c[sum]++;
		}
		
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(resa[i]==0)
		{
			resa[i]=1;
			ans[u]=i;
			for(int j=i;j<=n;j++)
			{
				if(resb[j]==0)
				{
					ans[u+1]=j;
					resb[j]=1;
					if(res[n-i-j]==0&&n-i-j>=1)
					{
						resc[n-i-j]==1;
						ans[u+2]=n-i-j;
						dfs(u+3);
						resc[n-i-j]=0;
					}
					
				}
				resb[j]=0;
			}
			
		}
		resa[i]=0;
	}
}

int main()
{
	cin>>n>>k;
	
	dfs(1);
	/*for(int i=0;i<=300;i++)
	{
		if(c[i]!=0)
		{
			//cout<<i<<endl;
			cnt++;
		}
	}*/
	cout<<cnt;
	return 0;
}
