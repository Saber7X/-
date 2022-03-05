#include<bits/stdc++.h>
using namespace std;
const int N=110,M=200010,B=M/2;
bool f[N][M]={0,0};
int main()
{
	int n;
	cin>>n;
	int num[100]={0};
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	
	f[0][B]=1;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=-sum;j<=sum;j++)
		{
			f[i][j+B]=f[i-1][j+B];//先不放 
			if(j-num[i]>=-sum)//放左边 
			{
				if(f[i][j+B]==1||f[i-1][j-num[i]+B]==1)
				{
					f[i][j+B]=1;//只要有一个为非空，那么就说明这个可以被凑出来 
				}
			}
			if(j+num[i]<=sum)//放右边 
			{
				if(f[i][j+B]==1||f[i-1][j+num[i]+B]==1)
				{
					f[i][j+B]=1;// 
				}
			}
		}
	}
	for(int i=1;i<=sum;i++)
	{
		if(f[n][i+B]==1)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
 } 
