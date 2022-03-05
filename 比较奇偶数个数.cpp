#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		int j=0,o=0;
		int x;
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x%2==0)
			{
				o++;
			}
			else if(x%2==1)
			{
				j++;
			}
		}
		if(o>j)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
