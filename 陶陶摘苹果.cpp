#include<stdio.h>
int main()
{
	int num[10];
	int i;
	int s;
	int cnt=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		if(num[i]<=s+30)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
