#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int f[100][100]={0};
	f[1][1]=1;
	for(int i=1;i<=21;i++)
	{
		for(int j=1;j<=21;j++)
		{
			f[i][j]+=f[i-1][j]+f[i][j-1];
			printf("%10lld ",f[i][j]);
		}
		cout<<endl;
	}
	cout<<f[21][21];
	return 0;
}
