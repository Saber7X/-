#include<bits/stdc++.h>
using namespace std;
int n;
int f(int u)
{
	int m=sqrt(u);//找到所有的因数
	int sum=0;//记录数量 
	for(int i=1;i<=m;i++)//在一个数的前半部分找，如果能被整除，那么说明有两个因数 
	{
		if(u%i==0) 
		{
			sum+=2;
		}
	
	}
	if(m*m==u)//如果有两个相同的因数 
	{
		sum--;
	}
	return sum;
}


int main()

{
	
	cin>>n;
	for(int i=1;i<=1000005;i++)
	{
		if(f(i)==n)
		{
			cout<<i;
			break;//如果找到立刻跳出 
		}
	}
	return 0;
}
