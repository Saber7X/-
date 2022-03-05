#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,m;
	int i,j,k;
	scanf("%d:%d",&h,&m);
	if(h>=0&&h<=11||(h==12&&m==0))
	{
		printf("Only %02d:%02d.  Too early to Dang.",h,m);
	}
	else
	{
		if(m==0)
		{
			int a=h-12;
			int cnt=0;
			while(cnt<=a)
			{
				printf("Dang");
				cnt++;
			}
			
		}
		else if(m!=0)
		{
			int a=h-11;
			int cnt=0;
			while(cnt<=a)
			{
				printf("Dang");
				cnt++;
			}
			
		}
		
	}
	return 0;
}
