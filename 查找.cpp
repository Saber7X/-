#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int flag=0;int x; 
	while(scanf("%d",&n)!=EOF)
	{
		int a=0,b=0;
		int num[101]={0},ans[101]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		int m;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&x);
			for(int j=0;j<n;j++)
			{
				flag=0;
				if(x==num[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		/*for(int i=0;i<b;i++)
		{
			
				{
					printf("YES\n");
					break;
				}
				else if(i==b-1&&j==a-1)
				{
					printf("NO\n");
					break;
				}*/
			}
		}
	
	
	return 0;
}
