#include<stdio.h>

int main()
{
	int a=0,b=0;
	scanf("%d %d",&a,&b);
    if(a<b)
	{
	  	printf("%d",b-a);
    }
    else
    {
    	printf("%d",a-b);
	}
	return 0;
}
