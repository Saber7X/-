#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	long long int num[2000];
	long long int k=0;
	cin>>s;
	printf("s.length()=%d\n",s.length());
	for(long long int i=1;i<=1000;i++)
	{
		num[i]=s[i-1]-'0';
	}
	
	long long int maxn=-111;
	
	for(long long int i=1;i<=988;i++)
	{
		long long int sum=1;
		for(long long int j=i;j<=i+12;j++)
		{
			cout<<num[j]<<" ";
			sum*=num[j];
		}
		maxn=max(maxn,sum);
		cout<<endl;
	}
	cout<<maxn;
	return 0;
}
