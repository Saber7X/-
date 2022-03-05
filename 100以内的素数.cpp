#include<stdio.h>
int main()
{
	int x;
	
	for(x=1;x<=100;x++)
	{
	    int c=1;
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				c=0;
				break;
			}
		}
		if(c==1)
		{
			printf("%d\n",x);
		}
	}
    return 0;

 } 
 
