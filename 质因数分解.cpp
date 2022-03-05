#include<bits/stdc++.h>
using namespace std;
//const int maxn=200000001;
long long int n;
long long int prime[500000],pnum=0;
bool p[500000]={0};
void findprime()
{
	for(long long int i=2;i<=sqrt(n)+1;i++)
	{
		if(p[i]==0)
		{
			prime[pnum++]=i;
			//printf("%lld ",i); 
			 for(long long int j=i*i;j<=sqrt(n)+1;j+=i)
			 {
			 	p[j]=1;//±ê¼Ç 
			}
		} 
		  
	 } 
}
int isprime(long long int a)
{
	
		for(long long int i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				return 1;
			}
		}
		return 0;
	
}
int main()
{
	
	//int n;
	scanf("%lld",&n);
	findprime();
	for(long long int i=0;i<n;i++)
	{
		if(n%prime[i]==0&&isprime(n/prime[i])==0)
		{
			printf("%lld",n/prime[i]);
			break;
			
		}
	}
	return 0;
}
