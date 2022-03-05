#include<iostream>
#include<algorithm>
#include<cstdio>
#define ll long long int
using namespace std;
int isleap(int year)
{
	if((year%400==0)||(year%100!=0&&year%4==0))
	{
		return 1;
	}
	return 0;
}
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
	ll y,m,d;
	cin>>y>>m>>d;
	ll k;
	cin>>k;
	ll sum=(k-1)*5;
	ll min=(sum+1)*24*60*60;
	while(sum>0)
	{
		d++;
		if(d>month[m][isleap(y)])
		{
			d=1;m++;
		}
		if(m>12)
		{
			m=1;y++;
		}
		sum--;
	}
	printf("%04d-%02d-%02d\n",y,m,d);
	cout<<min;
	return 0;
}
