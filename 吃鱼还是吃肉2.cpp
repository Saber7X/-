#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a="duo chi yu!";
	string b="duo chi rou!";
	string c="wan mei!";
	string d="ni li hai!";
	string e="shao chi rou!";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(x==1)
		{
			if(y==130)
			{
				cout<<c<<" ";
			}
			if(y<130)
			{
				cout<<a<<" ";
			}
			if(y>130)
			{
				cout<<d<<" ";
			}
			
			if(z==27)
			{
				cout<<c<<endl;
			}
			if(z>27)
			{
				cout<<e<<endl;
			}
			if(z<27)
			{
				cout<<b<<endl;
			}
		}
		if(x==0)
		{
			if(y==129)
			{
				cout<<c<<" ";
			}
			if(y<129)
			{
				cout<<a<<" ";
			}
			if(y>129)
			{
				cout<<d<<" ";
			}
			
			if(z==25)
			{
				cout<<c<<endl;
			}
			if(z>25)
			{
				cout<<e<<endl;
			}
			if(z<25)
			{
				cout<<b<<endl;
			}
		}
	}
	return 0; 
 } 
