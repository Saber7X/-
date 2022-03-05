#include<bits/stdc++.h> 
using  namespace std;
int isleap(int year)
{
	if((year%400==0)||(year%100!=0&&year%4==0))
	{
		return 1;//是闰年 
	}
	else
	{
		return 0;//是平年 
	}
}

long long int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

int main()
{
	long long int y,m,d;
	cin>>y>>m>>d;
	long long int n;
	cin>>n;
	long long int sum=(n-1)*5;
	long long int min=(sum+1)*24*60*60;
	while(sum--)
	{
		d++;
		if(d==month[m][isleap(y)]+1)
		{
			d=1;
			m++;
		}
		if(m==13)
		{
			m=1;
			y++;
		}
		
	}
	printf("%04lld-%02lld-%02lld\n",y,m,d);
	cout<<min;
	
	return 0;
}
