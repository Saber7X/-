#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
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
int lcm(long long int a,long long int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	long long int x,y;
	scanf("%lld %d",&x,&y);//输入最大公约数和最小公倍数 
	long long int sum=x*y;//最大公约数和最小公倍数的乘积也是要找的数的乘积 
	int a=sqrt(sum)+1;//乘积的二次方根，用这个开始除 
	int cnt=0;
	//printf("%d\n",a);
	bool t=0;
	for(long long int i=a;i>0;i--)
	{
		if(sum%i==0)
		{
			int b=sum/i;
			if(gcd(i,b)==x&&lcm(i,b)==y)
			{
				cnt++;
			}
			if(i==b)
			{
				t++;
			}
		 } 
	} 
	if(t!=0)
	{
		printf("%lld",(cnt-t)*2+t);
	}
	else
	{
		printf("%lld",cnt*2);
	}
	return 0;
}
