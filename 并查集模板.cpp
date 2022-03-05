#include<bits/stdc++.h>
using namespace std;
int p[1000005];
int find(int x)
{
	if(p[x]!=x)
	{
		p[x]=find(x);
	}
	return p[x];
}


int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++)
	{
		p[i]=i;
	}
	
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(x==1)
		{
			p[find(y)]=find(z);
		}
		else if(x==2)
		{
			if(find(y)==find(z))
			{
				cout<<"Y"<<endl;
			}
			else if(find(y)!=find(z))
			{
				cout<<"N"<<endl;
			}
		}
	}
	return 0;
}
