#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{

	long long int b[100010]={0};
	long long int res[100010]={0};
	long long int n;
	cin>>n;
	long long int cnt=0;
	for(long long int j=1;j<=n;j++)
	{
		int x;
		cin>>x;
		res[x]++;
	}
	
	for(long long int j=1;j<=n;j++)
	{
		cin>>b[j];
	}
	
	for(long long int j=1;j<=n;j++)
	{
		long long int x; 
		scanf("%lld",&x);
		if(res[b[x]]!=0)
		{
			cnt+=1;//res[b[x]]
		}
	}	
	
			
	

	printf("%lld",cnt);
	return 0;
}
