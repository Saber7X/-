#include<stdio.h>
int main()
{
	int a=0,b=0,x,y,t,i;
	scanf("%d %d",&x,&y);
	while(t<=1000)
	{
		while(t<=1000)
		{
			t=a*x+b*y; 
			for(i=1;i<=1000;i++)
			{
				if(t!=i)
				{
					printf("%d ",i);
					break;
				}
			}
			b++;
			if(t!=i) break;
		}
		a++;
		if(t!=i) break;
	}
	return 0;
 } 
