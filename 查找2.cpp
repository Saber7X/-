#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int n1[105];
		for(int i=0;i<n;i++)//ԭ���� 
		{
			scanf("%d",&n1[i]);
		}
		sort(n1,n1+n);
		/*for(int i=0;i<n;i++)
		{
			printf("%d ",n1[i]);
		}*/
		int m;
		scanf("%d",&m);
		int m1[105];
		for(int i=0;i<m;i++)//����ҵ� 
		{
			scanf("%d",&m1[i]);
		}
		/*for(int i=0;i<m;i++)
		{
			printf("%d ",m1[i]);
		}*/
		
		for(int i=0;i<m;i++)//��������ҵ����� 
		{
			int left=0;
			int right=n-1;
			//int mid=(left+right)/2;
			while(1)
			{
				int mid=(left+right)/2;
				if(m1[i]<n1[mid])
				{
					right=mid-1;
				}
				if(m1[i]>n1[mid])
				{
					left=mid+1;
				}
				if(m1[i]==n1[mid])
				{
					printf("YES\n");
					break;
				}
				if(right<left)
				{
					printf("NO\n");
					break;
				}
			}
		}
	}
	return 0;
}
