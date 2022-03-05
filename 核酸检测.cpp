#include<stdio.h>
int main()
{
	int d1,d2,t1,t2;
	scanf("%d %d",&d1,&t1);
	scanf("%d %d",&d2,&t2);
	int a=d1+7;
	if(a>d2)
	{
		printf("YES");
	}
	else if(a==d2&&t1>t2)
	{
		printf("YES");
	}
	else if(a==d2&&t1<t2)
	{
		printf("NO");
	}
	else if(a<d2)
	{
		printf("NO");
	}
	return 0;
 } 
