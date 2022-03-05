#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,sum=0;
	long long int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		sum+=x;
	}
	int cnt=0;//整数部分的位数 
	bool t=0;//判断首位0
	bool t1=0;// 判断是否到小数部分 
	int num[1001];
	x=sum;
	int cnt1;
	while(x>0)
	{
		x/=10;
		cnt++; 
	}
	cnt1=cnt;//整数部分的位数 
	x=sum 
	while(x>0)
	{
		num[cnt--]=x%10;
		x/=10;
	}
	while(x>0)
	{
		if(t==0)
		{
			
		 } 
	}
	return 0;
	 
}
