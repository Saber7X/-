#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	int n;
	bool t=0;
	while(cin>>a)
	{
		if(a=='.')
		{
			break;
		}
		cin>>n;
		if(t!=0)
		{
			cout<<endl;
		}
		t=1;
		int k=(n*2-2)/2;
		if(k%2!=0)
		{
			k-=1;
		}
		int b=(n*2-k-2)/2;
		
		for(int i=1;i<=n;i++)
		{
			if(i==1||i==n)
			{
				for(int j=1;j<=n*2;j++)
				{
					cout<<a;
				}
				cout<<endl;
			}
			if(i>2&&i<n-1)
			{
				cout<<a;
				for(int j=1;j<=b;j++)
				{
					cout<<" ";
				}
				for(int j=1;j<=k;j++)
				{
					printf("%c",a);
				}
				for(int j=1;j<=b;j++)
				{
					cout<<" ";
				}
				cout<<a<<endl;
			}
			if(i==2||i==n-1)
			{
				cout<<a;
				for(int j=1;j<=n*2-2;j++)
				{
					cout<<" ";
				}
				cout<<a<<endl;
			}
		}
	}
	return 0;
}
