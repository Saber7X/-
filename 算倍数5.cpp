#include<stdio.h>
void k(int a,int b)
{
	int cnt;
	for(int i=0;i<b;i++)
	{
		if(i%b==0) cnt++;
	}
	printf("%d",cnt);
 } 
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	k(n,m);
	return 0;
}
