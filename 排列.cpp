#include<bits/stdc++.h>
using namespace std;
int n;
const int N=100;
bool res[N]={0};
int ans[N];
void f(int u)
{
	//printf("\n%d \n",u);
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d ",ans[i]);
		}
		printf("\n"); 
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			f(u+1);
			res[i]=0;
		}
	}
	return;
} 
int main()
{
	scanf("%d",&n);
	f(1);
	return 0;
} 
