#include<stdio.h>
int main()
{
	int n,x,i=1,a,q=0,w=0,e=0;
	scanf("%d %d",&n,&x);
	while(scanf("%d",&a)!=EOF)
	{
		if(a<x) q++;
		if(a=x) w++;
		if(a>x) e++;
		
		
		if(a==n) break;
	}
	printf("%d %d %d",q,w,e);
	
}
