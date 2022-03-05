#include<bits/stdc++.h>
using namespace std;
long long fastPower(long long base, long long power) 
{
    long long result = 1;
	while (power > 0) 
	{
        if (power % 2 == 0) 
		{
            power = power / 2;//把指数缩小为一半
            base = base * base % 1000;//底数变大成原来的平方
        } 
		else 
		{
            power = power - 1;//把指数减去1，使其变成一个偶数
			result = result * base % 1000;//此时记得要把指数为奇数时分离出来的底数的一次方收集好
            power = power / 2;//此时指数为偶数，可以继续执行操作
            base = base * base % 1000;
        }
    }
    return result;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,sum=0,flag,cnt=0;
		cin>>n>>k;
		for(long long int i=1;fastPower(n,i)<=k;i++)
		{
			flag=fastPower(n,i);
			cnt++; 
		}
		cnt+=(k-flag);
		cout<<cnt<<endl;
		
	}
	return 0;
}
