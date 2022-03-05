#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		int num[201];
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		int x;
		scanf("%d",&x);
		int t=0;
		for(i=0;i<n;i++)
		{
			if(num[i]==x)
			{
				t=2;
				printf("%d\n",i);
				break;
			}
		}
		if(t!=2)
		{
			printf("-1\n");
		}
	}
	
	return 0;
}
