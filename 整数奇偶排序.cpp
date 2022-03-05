#include<stdio.h>
int main()
{
	int num[100];
	int j[100];
	int o[100];
	int i;
	int t;
	int cntj=0,cnto=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",num[i]);
	}
	for(i=1;i<=9;i++)
	{
		for(int k=1;k<=9;k++)
		{
			if(num[k]<num[k+1])
			{
				t=num[k];
				num[k]=num[k+1];
				num[k+1]=t;
			}
		}
	}
	for(i=1;i<=10;i++)
	{
		if(num[i]%2==1)
		{
			cntj++;
			j[cntj]=num[i];
		}
		if(num[i]%2==0)
		{
			cnto++;
			j[cnto]=num[i];
		}		
	}
	for(i=1;i<=cntj;i++)	
	{
		printf("%d ",j[i]);
	 } 
	for(i=cnto;i>=1;i--)
	{
		printf("%d ",o[i]);
	}
	return 0;
		
		
	
}
