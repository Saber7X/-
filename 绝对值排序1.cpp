#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,s;
	int num[100];
	scanf("%d",&n);
	s=a;
	int t;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		num[i]=a;
	}
	for(int j=0;j<n-1;j++)
	{
		
		for(int h=0;h<n-1;h++)
		{
			if(abs(num[h])<abs(num[h+1]))
			{
				t=num[h+1];
				num[h+1]=num[h];
				num[h]=t;
			}
		}
	}
	for(int k=0;k<n;k++)
	{
		printf("%d ",num[k]);
	}
	
	
	return 0;
 } 
