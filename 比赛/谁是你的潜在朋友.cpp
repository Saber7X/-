#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int num[250];
	int ans[250]={0}; 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);//ÿ����ϲ������ı�� 
		if(num[i]<=m)
		{
			ans[num[i]]++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(ans[num[i]]==1)
		{
			printf("BeiJu\n");
		}
		else if(num[i]>1)
		{
			printf("%d\n",ans[num[i]]-1);
		}
	}
	//printf("\n");
	}
	
	return 0;
 } 
