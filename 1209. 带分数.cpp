#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int n;

int cnt=0;
bool res[100]={0};
int ans[100];

int sum(int a,int b)
{
	int ans1=0;
	for(int i=a;i<=b;i++)
	{
		ans1=ans1*10+ans[i];
	}
	return ans1;
}


void dfs(int u)
{
	if(u>9)
	{
		for(int i=2;i<=7;i++)
		{
			for(int j=i+1;j<=9;j++)
			{
				int a=sum(1,i-1);
				int b=sum(i,j-1);
				int c=sum(j,9);
				if(a*c+b==n*c)
				{
					cnt++;
				}
			}
		}
		return;
	}
	for(int i=1;i<=9;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			dfs(u+1);
			res[i]=0;
		}
	}
}

int main()
{
	cin>>n;
	dfs(1);
	cout<<cnt;
	return 0;
}
