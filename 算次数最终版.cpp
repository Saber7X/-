#include<bits/stdc++.h>
using namespace std;   
long long int a[1000005]={0},b[1000005]={0};
int main()
{
	long long int cnt=0,cnt1=0;
	long long int x,n;
	long long int i,j;
	long long int max,min;
	scanf("%lld",&x);
	for(i=0;i<x;i++)
	{
		scanf("%lld",&n);
		if(n>=0)
		{
			a[n]++;//用下标记录数字，数组的值记录出现次数 
		}
		else
		{
			int c=abs(n);
			b[c]++;
		}
	}
	
	for(i=0;i<=1000005;i++)//找出正数里出现次数最多的 
	{
		
		if(a[i]>cnt)
		{
			max=i;
			cnt=a[i];
		}
		
	}
	for(j=1000005;j>0;j--)//找出负数里出现次数最多的 
	{
		
		if(b[j]>cnt1)
		{
			min=j;
			cnt1=b[j];
		}
	}
	if(cnt1>=cnt)//如果多个数出现次数一样和出现次数最多的是负数的情况
	{
		printf("%lld",-min); 
	 } 
	else
	{
		printf("%lld",max);
	}
	return 0;
}
