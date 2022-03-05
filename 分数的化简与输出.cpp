#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)//最大公约数 
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
int lcm(int a,int b)//最小公倍数 
{
	return a/gcd(a,b)*b;
}
struct fraction{//结构体存储整数 
	int up,down;//分子，分母 
}num[10];
fraction reduction(fraction result)//结构体函数
{
	if(result.down<0)//分母为负数时，分子分母变成他们的相反数 
	{
		result.down=-result.down ;
		result.up =-result.up; 
	 } 
	if(result.up==0)//分子为0时，分母为1 
	{
		result.down=1; 
	}
	else//分子不为0时 
	{
		int d=gcd(abs(result.down),abs(result.up));//分子分母的最大公约数 
	}
	return result; 
 } 
 void showresult(fraction r)
 {
 	r=reduction(r);
 	if(r.down==1)
 	{
 		printf("%d",r.up);//分母为1时，直接输出分子 
	}
	else if(abs(r.up)>(r.down))//假分数（分子大于分母）
	{
		printf("%d %d/%d",r.up/r.down,r.up%r.down,r.down); 
	 } 
	else//真分数 
	{
		printf("%d/%d",r.up ,r.down );
	}
 }
int main()
{
	*********************;
	return 0; 
	
 } 
