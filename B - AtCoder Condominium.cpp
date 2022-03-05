#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			//cout<<i*100+k<<endl;
			sum+=(i*100+j);
		}
	}
	cout<<sum;
	
	return 0;
}
