#include<bits/stdc++.h>
using namespace std;
int n;
int res[100]={0};//¼ÇÂ¼×´Ì¬
int ans[100]; 
void f(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d ",ans[i]);
		}
		cout<<endl; 
		
	}
	for(int i=1;i<=n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			f(u+1);
			res[i]=0;
		}
	}
}
int main()
{
	
	cin>>n;
	f(1);
	return 0;
}
