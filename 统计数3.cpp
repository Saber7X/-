#include<stdio.h>
int main()
{
	int n,x,a=0,q=0,w=0,e=0;
	scanf("%d %d",&n,&x);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a);
		if(a<x) q++;
		if(a==x) w++;
		if(a>x) e++;
	}
	printf("%d %d %d",q,w,e);
	return 0;
	
}
