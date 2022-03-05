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
	//如果是奇数，就肯定在中间那个点，如果是偶数，就肯定在中的左右两边找最大的 
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
