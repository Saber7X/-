#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num[5]={0,10,20,50,100};
	int f[10005]={0};
	f[0]=1;
	cin>>n;
	for(int i=1;i<=4;i++)
	{
		for(int j=num[i];j<=n;j++)
		{
			f[j]+=f[j-num[i]];
		}
	}
	cout<<f[n];
	return 0;
}
