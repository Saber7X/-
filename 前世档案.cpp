#include<bits/stdc++.h>
using namespace std;
int n,m;//坑位，人数 
int res[100]={0};
int ans[100]={1};//因为是从1开始，所以都赋值为1； 
struct name{
	int a;//选择 
	
}num[101];
int cnt=0;
void dfs(int u)
{
	
	if(u>n)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			//cout<<ans[i]<<" ";
			sum=sum*10+ans[i];
			
		}
		num[cnt++].a =sum;
		//cout<<endl;
		return;
	 }
	
		
	for(int i=1;i<=2;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i; 
			dfs(u+1);
			res[i]=0;
		}
	}
	
}

int main()
{
	cin>>n>>m;
	dfs(1);
	string a;
	for(int i=1;i<=m;i++)
	{
		cin>>a;
		int sum=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='y')
			{
				sum=sum*10+1;
			}
			if(a[i]=='n')
			{
				sum=sum*10+2;
			}
		}
		for(int i=0;i<cnt;i++)
		{
			if(num[i].a ==sum)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}
