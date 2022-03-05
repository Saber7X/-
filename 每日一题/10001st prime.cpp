#include<bits/stdc++.h>
using namespace std;
long long int prime[2000000];
bool res[2000000]={0};
long long int cnt=1;
void findprime()
{
	for(long long int i=2;i<=2000000;i++)
	{
		if(res[i]==0)
		{
			prime[cnt++]=i;
			//cout<<prime[cnt-1]<<" ";
			for(long long int j=i*i;j<=2000000;j+=i)
			{
				res[j]=1;
			}
		}
	}
}


int main()
{
	findprime();
	cout<<prime[10001];
	return 0;
}
//104743
