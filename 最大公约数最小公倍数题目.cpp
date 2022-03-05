#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	long long int n,m;//n是最大公约数，m是最小公倍数 
	scanf("%lld %lld",&n,&m);
	long long int c=n*m;//要求的两个数的积 
	long long int d=sqrt(c)+1;//开根号开始找 
	long long int a=0,b=0;//a,b用来存要求的两个数 
	//printf("%d",d);
	//long long int ans[10001];
	//long long int cnt=0;
	bool t=0;//判断两个数是否存在 
	while(1)//死循环开始判断 
	{
		if(c%d==0)//如果能整除，就找到了符合部分条件的a，b 
		{
			long long int e=c/d;//找到另一个数 
			if(gcd(e,d)==n&&lcm(e,d)==m)//判断是否符合最大公约数和最小公倍数 
			{
				printf("%lld",e+d);
				return 0;
			}
		}
		d--;
		if(d==0)
		{
			t=1;
			return 0;
		} 
	}
	
	return 0;
}

