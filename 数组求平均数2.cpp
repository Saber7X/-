#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int num[100]; 
	int i=0;
	scanf("%d",&x);
	while(x!=-1)
	{
		
		num[i]=x;
		sum+=x;
		i++;
		scanf("%d",&x);
	}
	int n;
	printf("平均数是%f",sum/i);
	for(n=0;n<i;n++)
	{
		
		if(num[n]>sum/i)
		{
			printf("%d ",num[n]);
		}
	}
	return 0;
 } 
