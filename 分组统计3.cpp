#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	int n;
	while(scanf("%d",&m)!=EOF)
	{
		int a[105],b[105];
		int num[105]={0};
	int num1[105]={0};
	int c[105];
	int d[105];
	for(int i=0;i<m;i++)
	{
		int cnt=0;
		int cnt1=0;
		scanf("%d",&n); 
		for(int k=0;k<n;k++)
		{
			scanf("%d",&a[k]);
			num[a[k]]++;
		}
		for(int e=0;e<n;e++)
		{
			scanf("%d",&b[e]);
			num1[b[e]]++;
		}
		for(int j=0;j<105;j++) 
		{
			if(num[j]!=0) 
			{
				c[cnt]=j;
				cnt++;
			} 
			if(num1[j]!=0)
			{
				d[cnt1]=j;
				cnt1++;
			}
		}
		
		for(int j=0;j<cnt1;j++)
		{
			printf("%d={",d[j]);
			for(int k=0;k<cnt;k++)
			{
				int s=0;
				printf("%d=",c[k]);
				for(int l=0;l<n;l++)
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
