#include<bits/stdc++.h>//错误点，要用long int 
using namespace std;
long long int gcd(long long int a,long long int b)
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
long long int lcm(long long int a,long long int b)
{
	return a/gcd(a,b)*b;
}
struct name{
	int up;
	int down;
}num[105];
int main()
{
	long long int n;
	long long int sum=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld/%lld",&num[i].up,&num[i].down);
		if(num[i].up ==0)
		{
			num[i].down=1;
		}
		if(num[i].down==0)
		{
			num[i].up=0;
		 } 
		
	}
	long long int temp=1; 
	for(int i=0;i<n;i++)//找分母的最小公倍数
	{
		if(num[i].down==0)
		{
			continue;
		}
		temp=lcm(temp,num[i].down);
	 } 
	 //printf("%d",temp); 
	for(long long int i=0;i<n;i++)//通分分子并相加
	{
		sum=sum+num[i].up*(temp/num[i].down); 
	}
	 //printf("%d",sum);
	long long int s=gcd(sum,temp);
	sum/=s;//约分 
	temp/=s;
	if(temp==1)
	{
		printf("%lld",sum);
	}
	else if(abs(sum)>temp&&sum!=0)
	{
		
		printf("%lld %lld/%lld",sum/temp,sum%temp,temp);
	 }
	else if(temp==0||sum==0)
	{
		printf("0");
	}
	else
	{
		printf("%lld/%lld",sum,temp);
	}
	return 0;
}
