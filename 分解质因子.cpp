#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;//int型最大值 
int prime[maxn];//素数表 
int pnum=0;//素数表内的个数 
bool isprime(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void findprime()//暴力求素数表 
{
	for(int i=1;i<maxn;i++)
	{
		if(isprime(i)==0)
		{
			prime[pnum++]=i;
		}
	}
}
struct factor
{
	int x;//素数 
	int cnt;//素数的个数 
}fac[10]; 
int main()
{
	findprime();//素数表
	int n,num=0;//num为n的不同质因子的个数 
	scanf("%d",&n);
	if(n==1)//特殊情况 
	{
		printf("1=1");
	}
	else
	{
		printf("%d=",n);
		int sqr=sqrt(n);//n的根号，也是质因子的最大范围
		//开始枚举sqr以内的质因子 
		for(int i=0;i<pnum&&prime[i]<=sqr;i++)// 个数小于素数的总个数，大小小于根号n
		{
			if(n%prime[i]==0)
			{
				fac[num].cnt=0;
				fac[num].x =prime[i];//记录该因子
				while(n%prime[i]==0)
				{
					n/=prime[i];
					fac[num].cnt ++;
				 } 
				 num++;//质因子的总数++ 
			 } 
			if(n==1)
			{
			 	break;
			} 
		 } 
		 if(n!=1)
		 {
		 	fac[num].x =n;
		 	fac[num].cnt=1;
		 }
		 for(int i=0;i<num;i++)
		 {
		 	printf("%d",fac[i].x);
		 	if(fac[i].cnt!=1)
		 	{
		 		printf("^%d",fac[i].cnt );
			 }
		 	if(i!=num-1)
		 	{
		 		printf("*");
			 }
		 }
	 } 
	return 0;
 } 
