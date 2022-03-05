#include<bits/stdc++.h>
using namespace std;
bool isleap(int year)
{
	if((year%400==0)||(year%100!=0&&year%4==0))
	{
		return 1;
	}
	return 0;
}
int date[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
	int n;//ÄêÊý
	cin>>n;
	int y1=1900,y2=1900+n-1;
	int m1=1,m2=12;
	int d1=1,d2=31;
	int week=1;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
	while(y1<y2||m1<m2||d1<d2)
	{
		if(d1==date[m1][isleap(y1)]+1)
		{
			d1=1;
			m1++;
		}
		if(m1==13)
		{
			m1=1;
			y1++;
		}
		if(week==8)
		{
			week=1;
		}
		if(week==6&&d1==13)
		{
			a++;
		}
		if(week==7&&d1==13)
		{
			b++;
		}
		if(week==1&&d1==13)
		{
			c++;
		}
		if(week==2&&d1==13)
		{
			d++;
		}
		if(week==3&&d1==13)
		{
			e++;
		}
		if(week==4&&d1==13)
		{
			f++;
		}
		if(week==5&&d1==13)
		{
			g++;
		}
		d1++;
		week++;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "; 
	return 0;
}
