#include<bits/stdc++.h>
using namespace std;
int n;
int res[100]={0};
void f(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			if(res[i]==1)
			{
				printf("%d ",i);
			}
		}
		printf("\n");
		return;
	}
	res[u]=2;
	f(u+1);
	res[u]=0;
	
	res[u]=1;
	f(u+1);
	res[u]=0;
	
}
int main()
{
	scanf("%d",&n);
	f(1);
	return 0;
 } 
