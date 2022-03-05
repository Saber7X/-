#include<stdio.h>
int main()
{
	int x;
	int mask=1;
	scanf("%d",&x);
	int t=x;
	int cnt=0,cnt1=0;
	if(x>0)
	{
		while(mask<x/10)
		{
			t/=10;
			mask*=10;
			cnt++;
		}
	}
	else if(x<0)
	{
		printf("fu ");
		x=-x;
		while(mask<x/10)
		{
			t/=10;
			mask*=10;
			cnt++;
		}
	}
	
	
	do
	{
		int a=x/mask;
		switch(a)
		{
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
			
		}
		x%=mask;
		mask/=10;
		cnt1++;
		if(cnt1<=cnt)
		{
			printf(" ");
		}
	}
	while(mask>0);
	return 0;
 } 
