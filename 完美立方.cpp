#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int a=2;a<=n;a++)
	for(int b=2;b<a;b++)
	for(int c=2;c<b;c++)
	for(int d=2;d<c;d++)
	if(a*a*a==b*b*b+c*c*c+d*d*d) 
	{
	   printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}
