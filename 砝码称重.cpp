#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=110,M=200010,B=M/2;
int n,m;
int w[N];
bool f[N][M];

int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
		m+=w[i];
	}
	f[0][B]=1; 
	
	for(int i=1;i<=n;i++)
	{
		for(int j=-m;j<=m;j++)
		{
			f[i][j+B]=f[i-1][j+B];
			if(j-w[i]>=-m)
			{
				if(f[i][j+B]==1||f[i-1][j-w[i]+B]==1)
				{
					f[i][j+B]=1;
				}
			}
			if(j+w[i]<=m)
			{
				if(f[i][j+B]==1||f[i-1][j+w[i]+B]==1)
				{
					f[i][j+B]=1;
				}
			}
		}
	}
	int res=0;
	for(int j=1;j<=m;j++)
	{
		if(f[n][j+B])
		{
			res++;
		}
	}
	cout<<res;
	return 0;
}
