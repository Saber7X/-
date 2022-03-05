#include<bits/stdc++.h>
using namespace std;
struct name{
	long long int a;
	int b;
	int c;
}num[100000];
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&num[i].a);
		scanf("%d",&num[i].b);
		scanf("%d",&num[i].c);
	}
	int m,d[10000];
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&d[j]);
		for(i=0;i<n;i++)
		{
			if(d[j]==num[i].b)
			{
				printf("%lld %d\n",num[i].a,num[i].c);
			}
		}
	}
	return 0;
}	
