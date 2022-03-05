#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int x;
	long long int sum=0;
	int num;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
	}
	int ans=sum/n;
	num=sum%n;
	cout<<ans<<".";
	for(int i=0;i<m;i++){
		num=num*10;
		int y=num/n;
		cout<<y;
		num=num%n;
	}
	return 0;
}

