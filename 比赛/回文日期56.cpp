#include<bits/stdc++.h>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool isleap(int x)
{
	int y=x/10000;//年 
	int m=(x/100)%100;//月 
	int d=x%100;//日 
	if(m<0||m>12) 
	{
		return false;
	} 
	if(d==0||m!=2&&d>a[m]) return false;
	if(m==2){//闰年平年判断 
		int c=y%100&&y%4==0||y%400==0; 
		if(d>a[m]+c) return false; 
	}
	return true;
}
int main()
{
	int d1,d2;
	scanf("%d %d",&d1,&d2);
	int s=0;
	for(int i=1000;i<10000;i++)
	{
		int d=i;
		int g=i;
		for(int j=0;j<4;j++)
		{
			d=d*10+g%10;
			g/=10;
		}
		if(d1<=d&&d<=d2&&isleap(d)) s++;
	}
	cout<<s<<endl;
	return 0;
}
