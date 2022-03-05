#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int ans=1;
	for(long long int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			long long int cnt=0;
			while(1)
			{
				if(n%i!=0)
				{
					break;
				}
				n/=i;
				//cout<<i<<" "<<n<<endl;
				cnt++;
			}
			if(cnt%2!=0)
			{
				ans*=i;
			}
		}
	}
	if(n>1)
	{
		ans*=n;
	}
	cout<<ans;
	return 0;
}
