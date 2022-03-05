#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int d,x,y,z;
		cin>>d>>x>>y>>z;
		long long int flag1=x*7;
		long long int flag2=d*y+(7-d)*z;
		cout<<max(flag1,flag2)<<endl;
	}
	return 0;
}
