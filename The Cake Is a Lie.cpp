#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int x,y,k;
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>k;
		int right=y-1;
		int down=x-1;
		for(int i=1;i<x;i++)
		{
			k-=1;
		}
		for(int i=1;i<y;i++)
		{
			k-=x;
		}
		if(k==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
