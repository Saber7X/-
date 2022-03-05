#include<stdio.h>
void k(long int a,long int b)
{
	long int cnt;
	for(int i=0;i<b;i++)
	{
		if(i%b==0) cnt++;
	}
	printf("%ld",cnt);
 } 
int main()
{
	long int n,m;
	scanf("%d %d",&n,&m);
	k(n,m);
	return 0;
}
