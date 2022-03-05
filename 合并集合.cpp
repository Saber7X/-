#include<bits/stdc++.h>
using namespace std;

int p[100010]={0};

int find(int x) 
{
	if(p[x]!=x)
	{
		p[x]=find(p[x]);
	}
	return p[x];
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		p[i]=i;
	}
	while(m--)
	{
		char c[2];
		int a;
		int b;
		cin>>c>>a>>b;
		if(c[0]=='M')
		{
			
			p[find(a)]=find(b);
			
		}
		else
		{
			if(find(a)==find(b))//ºÏ²¢
			{
				 cout<<"Yes"<<endl;
			} 
			else
			{
				cout<<"No"<<endl;
			}
		}
		
	}
	return 0;
}
