#include<bits/stdc++.h>
using namespace std;
int n;
int sum=1;
void dfs(int u)
{
	
	if(u==0)
	{
		printf("%d",sum);
		return;
	}
	sum*=u;
	dfs(u-1);
	
}

int main()
{
	scanf("%d",&n);
	dfs(n);
	return 0;
}
