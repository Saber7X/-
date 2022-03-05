#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int n;
	cin>>n;
	long long int num[1005]={0};
	long long int sum=0;
	for(long long int i=1;i<=n;i++)
	{
		cin>>num[i];
		if(num[i]>10)
		{
			sum+=(num[i]-10);
		}
	}
	cout<<sum;
	return 0;
}
