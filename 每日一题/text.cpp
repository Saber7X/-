#include<bits/stdc++.h>
using namespace std;

int cnt;
const int n=1000;
int prime[1000];
bool res[1000]={0};
void findprime()
{
	for(int i=2;i<=n;i++)
	{
		if(res[i]==0)
		{
			prime[cnt++]=i;
			for(int j=i*i;j<=n;j+=i)
			{
				res[j]=1;
			}
		}

	}
}
int main()
{
	findprime();
	for(int i=0;i<=1000;i++)
	{
		cout<<prime[i]<<" ";
	}
	return 0;
}

