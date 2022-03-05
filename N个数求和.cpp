#include<bits/stdc++.h>
using namespace std;
int gcd(long int a,long int b)//最大公约数 
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
int lcm(long int a,long int b)//最小公倍数 
{
	return a/gcd(a,b)*b;
}
struct name{
	long int up;
	long int down;
}num[105];
int main()
{
	long int n;
	scanf("%ld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%ld/%ld",&num[i].up,&num[i].down); 
		if(num[i].up ==0)
		{
			num[i].down=1;
		}
		if(num[i].down==0)
		{
			num[i].up=0;
		 } 
	}
	int temp=1;//最小公倍数 
	for(int i=0;i<n;i++)
	{
		if(num[i].down==0)
		{
			continue;
		}
		temp=lcm(temp,num[i].down);
	}
	int sum=0;
	for(int i=0;i<n;i++)//所有分子相加 
	{
		sum=sum+num[i].up*temp/num[i].down;
	}
	int s=gcd(sum,temp);//分子分母的最大公约数
	sum/=s;
	temp/=s;
	if(temp==1)
	{
		printf("%d",sum);
	 } 
	 else if(temp<abs(sum)&&sum!=0)
	 {
	 	printf("%d %d/%d",sum/temp,sum%temp,temp);
	 }
	 else if(sum==0||temp==0)
	 {
	 	printf("0");
	 }
	 else
	 {
	 	printf("%d/%d",sum,temp);
	 }
	return 0;
}
