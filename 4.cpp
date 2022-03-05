#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int num[100001];
	bool num1[100001]={0};
	long long int cnt=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=i+1;j<n;j++)
		{
			num1[num[i]+num[j]]=1;
		}
	}
	for(long long int i=0;i<n;i++)
	{
		if(num1[num[i]]==1)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
