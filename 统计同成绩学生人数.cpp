#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		int i;
		int cnt=0;
		int num[1000];
		int m;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		scanf("%d",&m);
		for(i=0;i<n;i++)
		{
			if(num[i]==m)
			{
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
