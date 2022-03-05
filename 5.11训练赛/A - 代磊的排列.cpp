#include<bits/stdc++.h>
using namespace std;
int num[10];
bool res[10]={0};
int ans[10];
int n;
map<string,int> res1;
void dfs(int u)
{
	if(u>n)
	{
		string s="";
		for(int i=1;i<=n;i++)
		{
			s+=ans[i]-'0';
		}
		if(res1[s]==0)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<ans[i];
			}
			res1[s]=1;
			cout<<endl;
		}
		
		return;
	}
	
	for(int i=0;i<n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=num[i];
			res[i]=1;
			dfs(u+1);
			res[i]=0; 
		}
			
	}
	return;
}

int main()
{
	
	string a;
	cin>>a;
	n=a.length();
	for(int i=0;i<a.length();i++)
	{
		num[i]=a[i]-'0';
	}
	sort(num,num+n);
	dfs(1);
	return 0;
}
