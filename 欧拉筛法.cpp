#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005;
int prime[maxn]={0},pnum=0;
bool a[maxn]={0};
void findprime()
{
	pnum=0;
	for(int i=2;i<maxn;i++)
	{
		if(a[i]==0)
		{
			prime[pnum++]=i;
			printf("%d ",i);
		}
		for(int j=0;j<pnum&&i*prime[i]<maxn;j++)
		{
			a[i*prime[j]]=1;//a[i*i]=1;
			if(i%prime[j]==0)
			{
				break;
			}
		}
	}
}
int main()
{
	findprime();
	return 0;
}
