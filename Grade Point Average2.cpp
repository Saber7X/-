#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int x;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
	}
	printf("%d",sum/n);
	sum%=n;
	cout<<".";
	for(int i=0;i<m;i++)
	{
		sum*=10;
		printf("%d",sum/n);
		sum%=n;
	}
	return 0;
}
