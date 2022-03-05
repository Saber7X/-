#include<bits/stdc++.h> 
using namespace std;
bool prime(int x)
{
	if(x==0)
	{
		return 1;
	}
	if(x==1)
	{
		return 1;
	}
	if(x==2)
	{
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 1;
		}
		
	}
	return 0;
}
int main()
{
	string a;
	cin>>a;
	sort(a.begin(),a.end());
	map<char,int> num;
	int minn=200;
	int maxn=-200;
	bool t=0;
	for(int i=0;i<a.length();i++)
	{
		num[a[i]]++;
		if(a[i]!=a[i+1]&&i!=a.length()-1)
		{
			t=1;
		}
		
		if(a[i]!=a[i+1])
		{
			
			if(num[a[i]]>maxn)
			{
				maxn=num[a[i]];
			}
			if(num[a[i]]<minn)
			{
				minn=num[a[i]];
			}
		}
	}
		int sum=maxn-minn;
		if(prime(sum)==0)
		{
			cout<<"Lucky Word"<<endl;
			cout<<sum;
		}
		if(prime(sum)==1)
		{
			cout<<"No Answer"<<endl;
			cout<<0;
		}
	return 0;
}


