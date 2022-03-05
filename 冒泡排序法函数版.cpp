#include<stdio.h>
void maopao(int num[],int n)
{
    int i,j,t;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	
	
}
int main()
{
	int n;int num[101];int t;int i,j;
	int a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	maopao(num,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	
	
	
	
	
}
