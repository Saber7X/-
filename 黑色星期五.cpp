#include<bits/stdc++.h>
using namespace std;
bool a(int year)//ÅĞ¶ÏÄê·İ 
{
	if(year%400==0||(year%4==0&&year%100!=0))
	{
		return 1;
	}
	return 0;
}


int main()
{
	int n;
	int date[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
	cin>>n;
	int y1=1900;
	int m1=1;
	int d1=1;
	int y2=1900+n-1;
	int m2=12;
	int d2=31;
	int week=1;
	int liu=0,ri=0,yi=0,er=0,san=0,si=0,wu=0;
	while(y1<y2||m1<m2||d1<d2)
	{
		if(week==1&&d1==13)
		{
			yi++;
		}
		if(week==2&&d1==13)
		{
			er++;
		}
		if(week==3&&d1==13)
		{
			san++;
		}
		if(week==4&&d1==13)
		{
			si++;
		}
		if(week==5&&d1==13)
		{
			wu++;
		}
		if(week==6&&d1==13)
		{
			liu++;
		}
		if(week==7&&d1==13)
		{
			ri++;
		}
		d1++;
		week++;
		if(week==8)
		{
			week=1;
		}
		if(d1==date[m1][a(y1)]+1)
		{
			d1=1;
			m1++;
		}
		if(m1==13)
		{
			m1=1;
			y1++;
		}
	}
	
	printf("%d %d %d %d %d %d %d",liu,ri,yi,er,san,si,wu);
	return 0;
 } 
