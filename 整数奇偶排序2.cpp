#include<stdio.h>

int main()
{
	
	int num[11];
	int t;
	int i,k;
	int j[11];
	int o[11];
	int cntj=0,cnto=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num[i]);
	}
	
	
	for(i=1;i<=9;i++)
	{
		for(k=1;k<=9;k++)
		{
			if(num[k]>num[k+1])
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
		else
		{
			cnto++;
			o[cnto]=num[i];
		}		
	}
	for(i=cntj;i>=1;i--)	
	{
		printf("%d ",j[i]);
	 } 
	for(i=1;i<=cnto;i++)
	{
		printf("%d ",o[i]);
	}
	return 0;
}
