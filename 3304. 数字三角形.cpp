#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int f[105][105]={0};
	int num[105][105]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>num[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			f[i][j]=num[i][j]+max(f[i-1][j],f[i-1][j-1]);
		}
	}
	//������������Ϳ϶����м��Ǹ��㣬�����ż�����Ϳ϶����е��������������� 
	if(n%2==0)
	{
		cout<<max(f[n][n/2],f[n][n/2+1]);
	}
	else
	{
		cout<<f[n][n/2+1];
	}
	
	return 0;
}
