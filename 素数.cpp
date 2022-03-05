#include<bits/stdc++.h>
using namespace std;
int n;
scanf("%d",&n);
const int maxn=n;
int prime[n]={0},pnum=0;
bool a[maxn]={0};
void prime(int n)
{
	pumn=0;
	for(int i=2;i<=maxn;i++)
	{
		if(a[i]!=1)
		{
			prime[pumn++]=i;
			for(int j=i*i;j<=maxn;j+=i)
			{
				a[j]=1;
			}
		}
	}
}
int main()
{
	scanf("%d",&n);
	prime();
	for(int i=2;i<=pumn;i++)
	{
		printf("%d ",prime[i]);
	}
	return 0;
}
