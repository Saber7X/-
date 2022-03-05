#include<bits/stdc++.h>
using namespace std;
int n;
bool biaoji[50000]={0};
int prime[50000]={0};
int cnt=0;
int isprime(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			return 1;
		}
	}
	return 0;
}
void findprime()
{
	cnt=0;
	for(int i=2;i<=n/2;i++)
	{
		if(biaoji[i]==0)
		{
			if(isprime(n-i)==0)
			{
				cnt++;
			}
			for(int j=i*i;j<=n/2;j+=i)
			{
				biaoji[j]=1;
			}
		}
		
	}
} 
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			break;
		}
		findprime();
		printf("%d\n",cnt);
	}
	return 0;
}
