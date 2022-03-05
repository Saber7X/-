#include<bits/stdc++.h>
using namespace std;
int f(int u)
{
	if(u<=1)
	{
		return 1;
	}
	return f(u-1)+f(u-2);
}
int main()
{
	int n;
	while(cin>>n)
	{
		int num[100];
		for(int i=1;i<=n;i++)
		{
			cin>>num[i];
		}
		int sum=1;
		for(int i=1;i<=n;i++)
		{
			//cout<<f(num[i])<<endl;
			sum*=f(num[i]);
		}
		cout<<sum<<endl;
	}
}
