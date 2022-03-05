#include<bits/stdc++.h>
using namespace std;
int n;
int f(int u)
{
	if(u<=1)
	{
		return 1;
	}
	return f(u-1)+f(u-2);
}
int main()
{
	int n;
	cin>>n;
	int num[100];
	int res[100]={0};
	int cnt=1;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		if(num[i]==2)
		{
			int v=0;
			for(int j=1;j<=cnt;j++)
			{
				v+=res[j];
			}
			res[cnt]=i-v;
			cnt++;
		}
	}
	
	bool t=0;
	int sum=0;
	for(int i=1;i<=cnt;i++)
	{
		sum+=res[i];
	}
	if(sum!=n)
	{
		t=1;
		res[cnt]=n-sum;
	}
	
	sum=1;
	for(int i=1;i<=cnt;i++)
	{
		
		if(i==cnt&&t==1)
		{
			sum*=f(res[i]);
		}
		else
		{
			sum*=f(res[i]-1);
		}
	}
	cout<<sum;
	return 0;
}

