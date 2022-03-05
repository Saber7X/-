#include<bits/stdc++.h>
using namespace std;
const int n=1000000;
long long int cnt;
long long int prime[n];
bool res[n]={0};
void findprime()
{
	for(long long int i=2;i<=n;i++)
	{
		if(res[i]==0)
		{
			prime[cnt++]=i;
			for(long long int j=i*i;j<=n;j+=i)
			{
				res[j]=1;
			}
		}
	}
}
int main()
{
	findprime();
	/*cout<<res[3]<<endl;
	for(int i=0;i<=10;i++)
	{
		cout<<prime[i]<<" ";
	}*/
	long long int i=0;
	long long int x=600851475143;
	while(1)
	{
		if(x==1)
		{
			cout<<prime[i-1];
			break;
		}
		if(x%prime[i]==0)
		{
			x/=prime[i];
		}
		cout<<x<<endl;
		i++;
	}
	return 0;
 } 
