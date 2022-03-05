#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;//样例数 
	int n;//两行每行几个数 
	while(scanf("%d",&m))
	{
		int a[2100]={0},b[105]={0};
	int num[2100]={0};//用作去重 
	int num1[2100]={0};//用作去重 
	int c[2100]={0};//记录去重后的数据
	int d[2100]={0};//记录去重后的组别 
	for(int i=0;i<m;i++)//几组样例 
	{
		int cnt=0;
		int cnt1=0;
		scanf("%d",&n); 
		for(int k=0;k<n;k++)//每行n个数 
		{
			scanf("%d",&a[k]);//数据 
			num[a[k]]++;
		}
		for(int e=0;e<n;e++)
		{
			scanf("%d",&b[e]);//组别 
			num1[b[e]]++;
		}
		for(int j=0;j<105;j++)//去重 
		{
			if(num[j]!=0)//数据 
			{
				c[cnt]=j;
				//printf("%d",c[cnt]);
				cnt++;
			} 
			if(num1[j]!=0)//组别 
			{
				d[cnt1]=j;
				//printf("%d",d[cnt1]);
				cnt1++;
			}
		}
		
		for(int j=0;j<cnt1;j++)//组别 
		{
			printf("%d={",d[j]);
			for(int k=0;k<cnt;k++)//数据 
			{
				int s=0;
				printf("%d=",c[k]);
				for(int l=0;l<n;l++)//原数据和组别 
				{
					if(a[l]==c[k]&&b[l]==d[j])
					{
						s++;
					 } 
				}
				printf("%d",s);
				if(k!=cnt-1)
				{
					printf(",");
				}
			}
			printf("}\n");
		}
	}
	}
	
	return 0;
}
