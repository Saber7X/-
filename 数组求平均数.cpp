#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int num[10]; 
	int i=0;
	scanf("%d",&x);
	while(x!=-1)
	{
		
		num[i]=x;
		i++;
		sum+=x;
		scanf("%d",&x);
	}
	int n;
	printf("平均数是%f",sum/i);
	for(n=0;n<i;n++)
	{
		
		if(num[i]>(sum/i))
		{
			printf("%d ",num[i]);
		}
	}
	return 0;
 } 
