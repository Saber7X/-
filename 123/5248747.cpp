#include<stdio.h>
int main()
{
	int a=0,
	    b=0,
	    c=0,
	    d=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d ±%d∑÷",c-a,
	                  ((c*60+d)-(a*60+b))%60);
    return 0;
}
