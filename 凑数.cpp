#include<stdio.h>
int main()
{
	int x,y,i;
	scanf("%d %d",&x,&y);
	for(i=1000;i>=0;i--)
	{
		if(i%x!=0&&i%y!=0)
		{
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}
