#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(a>=0&&a<=11)
	{
		if(a>9&&b>9)
		{
				
			printf("Only %d:%d.  Too early to Dang.",a,b);
		}
		else if(a<=9&&b<=9)
		{
			printf("Only %0d:%0d.  Too early to Dang.",a,b);
		}
		else if(a>9&&b<=9)
		{
			printf("Only %d:%0d.  Too early to Dang.",a,b);
		}
		else if(a<=9&&b>9)
		{
			printf("Only %0d:%d.  Too early to Dang.",a,b);
		}
	}
	else if(a==12&&b==00)
	{
		printf("Only 12:00.  Too early to Dang.");
	}
	else if(a==13&&b==00||a==12&&b!=00)
	{
		printf("Dang");
	}
	else if(a==14&&b==00||a==13&&b!=00)
	{
		printf("DangDang");
	}
	else if(a==15&&b==00||a==14&&b!=00)
	{
		printf("DangDangDang");
	}
	else if(a==16&&b==00||a==15&&b!=00)
	{
		printf("DangDangDangDang");
	}
	else if(a==17&&b==00||a==16&&b!=00)
	{
		printf("DangDangDangDangDang");
	}
	else if(a==18&&b==00||a==17&&b!=00)
	{
		printf("DangDangDangDangDangDang");
	}
	else if(a==19&&b==00||a==18&&b!=00)
	{
		printf("DangDangDangDangDangDangDang");
	}
	else if(a==20&&b==00||a==19&&b!=00)
	{
		printf("DangDangDangDangDangDangDangDang");
	}
	else if(a==21&&b==00||a==20&&b!=00)
	{
		printf("DangDangDangDangDangDangDangDangDang");
	}
	else if(a==22&&b==00||a==21&&b!=00)
	{
		printf("DangDangDangDangDangDangDangDangDangDang");
	}
	else if(a==23&&b==00||a==22&&b!=00)
	{
		printf("DangDangDangDangDangDangDangDangDangDangDang");
	}
	else if(a==23&&b!=00)
	{
		printf("DangDangDangDangDangDangDangDangDangDangDangDang");
	}
	return 0;
	
 } 
