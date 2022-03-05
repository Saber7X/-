#include<bits/stdc++.h> 
using namespace std;
void paixu(int n,int a[200])
{
	for(int i=0;i<n;i++)
	{
		int k=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		printf("%d ",a[i]);
	}
}
int main()
{
	int n;
	int a[105];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	/*for(int i=0;i<n;i++)
	{
		int k=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		printf("%d ",a[i]);
	}*/
	paixu(n,a);
	printf("\n");
	}
	
	
	return 0;
}
