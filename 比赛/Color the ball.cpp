#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n[100];//={1};
	int a,b;
	int ans[1000]={0};//ÔÝ´æ´ð°¸ 
	int sum[1000]={0};//¼ÇÂ¼´ð°¸ 
	int cnt=0;
	int c=0;
	while(n[c]!=0)
	{
		scanf("%d",&n[c])
		//sum[1000]={0};
		/*if(n[c]==0) 
		{
			break;
		}*/
		ans[1000]={0};
		for(int i=0;i<n[c];i++)
		{
			scanf("%d %d",&a,&b);
			for(int j=a;j<=b;j++)
			{
				ans[j]++;
			}
		}
		for(int k=1;k<=n[c];k++)
		{
			sum[cnt]=ans[k];
			cnt++;
		}
		c++;
	}
	int j=0;
	int k=0;
	for(int i=0;i<cnt;i++)
	{
		printf("%d ",sum[i]);
		j++;
		if(j==n[k])
		{
			j=0;
			printf("\n");
			k++;
		}
	}
	return 0;
}
