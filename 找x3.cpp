#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int num[205]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		int m;
		scanf("%d",&m);
		int left=0;
		int right=n-1;
		int mid;
		while(1)
		{
			mid=(left+right)/2;
			if(m<num[mid])
			{
				right=mid-1;
			}
			else if(m>num[mid])
			{
				left=mid+1;
			}
			if(m==num[mid])
			{
				printf("%d\n",mid);
				break;
			}
			if(left>right)
			{
				printf("-1\n");
				break;
			}
		}
		
		
	}
	return 0;
} 
