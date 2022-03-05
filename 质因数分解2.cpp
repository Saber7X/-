#include<bits/stdc++.h>
using namespace std;
//const int maxn=200000001;
long long int n;
/*long long int prime[20000001],pnum=0;
bool p[20000001]={0};
void findprime()
{
	for(long long int i=2;i<n;i++)
	{
		if(p[i]==0)
		{
			prime[pnum++]=i;
			//printf("%lld ",i); 
			 for(long long int j=i*i;j<n;j+=i)
			 {
			 	p[j]=1;//±ê¼Ç 
			}
		} 
		  
	 } 
}*/
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
	//findprime();
	for(long long int i=0;i<n;i++)
	{
		if(isprime(i)==0&&n%i==0&&isprime(n/i)==0)
		{
			printf("%lld",n/i);
			break;
			
		}
	}
	return 0;
}
