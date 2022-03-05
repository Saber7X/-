#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x;
	int i,j,k;int t=0;
	int num[1006]={0};
	//int a[1000];
	int maxn=-1;
	int bh;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&x);
			num[x]++;
		}
		//printf("x=%d num[x]=%d ",x,num[x]); 
	}
	for(i=0;i<1006;i++)
	{
		if(num[i]>maxn)
		{
			maxn=num[i];
			bh=i;
		}
		if(num[i]==maxn)
		{
			maxn=num[i];
			bh=i;
		}
	}
	printf("%d %d",bh,maxn);
	return 0;
 } 
