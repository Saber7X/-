#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(n*2>m)
		{
			cout<<"error"<<endl;
			continue;
		}
		int a=abs(n*4-m)/2;
		int b=n-a;
		if(a*2+b*4!=m)
		{
			cout<<"error"<<endl;
		}
		else
		{
			cout<<b<<" "<<a<<endl;
		}
		
		
	}
	return 0;
}
