//#include<bits/stdc++.h>
//using namespace std;
//int n,k;
//int num[100005]={0};
//int p;//¿ÓÎ» 
//int cnt=0;
//bool res[100005]={0};
//int ans[100005];
//int css[10005]={0};
//map<string ,int> ress;
//void f(int u)
//{
//	if(u>p)
//	{
//		int sum=0;
//		string x="";
//		for(int i=1;i<=p;i++)
//		{
//			x+=(ans[i]+'0');
//			sum=sum*10+ans[i];
//		}
//		cout<<sum<<endl;
//		if(sum<=k&&css[sum]!=1)
//		{
//			css[sum]=1;
//			cnt++;
//		}
//		return;
//	}
//	for(int i=1;i<=n;i++)
//	{
//		if(res[i]==0)
//		{
//			ans[u]=num[i];
//			res[i]=1;
//			f(u+1);
//			res[i]=0;
//		}
//	}
//	return;
//}
//
//
//int main()
//{
//	
//	cin>>n>>k;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>num[i];
//	}
//	int x=k;
//	while(x>0)
//	{
//		x/=10;
//		p++;
//		f(1);
//	}
//	
//	cout<<cnt;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int n,k,num[100005]={0},p,cnt=0,res[100005]={0},ans[100005],css[10005]={0};map<string ,int> ress;
void f(int u)
{
	if(u>p)
	{
		int sum=0;
		string x="";
		for(int i=1;i<=p;i++)
		{
			x+=(ans[i]+'0');
			sum=sum*10+ans[i];
		}
		cout<<sum<<endl;
		if(sum<=k&&css[sum]!=1)
		{
			css[sum]=1;
			cnt++;
		}
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=num[i];
			res[i]=1;
			f(u+1);
			res[i]=0;
		}
	}
	return;
}
void f(int u,int)
{
	if(u>p)
	{
		int sum=0;
		string x="";
		for(int i=1;i<=p;i++)
		{
			x+=(ans[i]+'0');
			sum=sum*10+ans[i];
		}
		cout<<sum<<endl;
		if(sum<=k&&css[sum]!=1)
		{
			css[sum]=1;
			cnt++;
		}
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(res[i]==0)
		{
			ans[u]=num[i];
			res[i]=1;
			f(u+1);
			res[i]=0;
		}
	}
	return;
}

int main()
{
	
	cin>>n>>k;
	int cntn=0;
	int fl[10005]={0};
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(fl[x]==0)
		{
			num[cnt++]=x;
			fl[x]=1;
		}
	}
	int x=k;
	while(x>0)
	{
		x/=10;
		p++;
		f(1);
	}
	for(int i=1;i<=p;i++)
	{
		memset(css,10005,0);
		memset(ans,10005,0);
		memset(res,10005,0);
		
	}
	cout<<cnt;
	return 0;
}
