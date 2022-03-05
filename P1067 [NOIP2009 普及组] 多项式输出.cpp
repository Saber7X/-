#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num[10000]={0};
	cin>>n;
	for(int i=1;i<=n+1;i++)
	{
		int x;
		cin>>num[i];
		
	}
	int flag=n;
	bool t=0;
	for(int i=1;i<=n;i++)
	{
		if(num[i]==0)
		{
			continue;
		}
		if(i==1&&num[i]<0)
		{
			cout<<"-";
		}
		if(t==1)
		{
			if(num[i]>0)
			{
				cout<<"+";
			}
			else
			{
				cout<<"-";
			}
		}
		t=1;
		if(abs(num[i])!=1)
		{
			cout<<abs(num[i]);
		}
		if(n+1-i!=1)
		{
			cout<<"x^"<<n+1-i;
		}
		else
		{
			cout<<"x";
		}
		
		flag--;
	}
	if(num[n+1]>0)
	{
		cout<<"+"<<num[n+1];
	}
	else if(num[n+1]<0)
	{
		cout<<num[n+1];
	}
	return 0;
}
