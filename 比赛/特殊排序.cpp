#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[1000];
	while(scanf("%d",&n)!=EOF)
	{
		int b;
		if(n==1)
		{
			scanf("%d",&b);
			printf("%d\n-1",b);
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			for(int i=0;i<n;i++)
			{
				int k=i;
				for(int j=k;j<n;j++)
				{	
					if(a[j]<a[k])
					{
						int temp=a[i];
						a[k]=a[j];
						a[j]=temp;
					}
				}
			}
			printf("%d\n",a[n-1]);
			for(int i=0;i<n-1;i++)
			{
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
