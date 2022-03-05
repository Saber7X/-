#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int c=0;
	if(n==1)
	{
		cout<<"0";
	}
	else if(n==2)
	{
		cout<<"0 1";
	}
	else
	{
		cout<<"0 " ;
		for(int i=1;i<=n-1;i++)
		{
			a=b;
			b=c;
			cout<<a+b<<" ";
			c=a+b;
		}
	}
	
	return 0;
}
