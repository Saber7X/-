#include<bits/stdc++.h>
using namespace std;

long long int dfs(long long int sum)
{
	long long int cnt=0;
	while(1)
	{
		if(sum==1)
		{
			break;
		}
		if(sum%2==0)
		{
			sum/=2;
		}
		else
		{
			sum=sum*3+1;
		}
		cnt++;
	}
	
	return cnt;
}

int main()
{
	long long int maxn=-11;
	long long int flag=0;
	for(long long int i=2;i<=1000000;i++)
	{
		if(maxn<dfs(i))
		{
			maxn=dfs(i);
			flag=i;
			cout<<maxn<<" ";
		}
	}
	cout<<flag;
	
	return 0;
}
