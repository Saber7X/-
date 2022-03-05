#include<stdio.h>
int main()
{
	int a1,a2,n;
	scanf("%d %d %d",&a1,&a2,&n);
	int cnt=0;
	int m=a2-a1;
	for(int i=2;i<n;i++)
	{
		a2+=m;
	}
	printf("%d",a2);
}
