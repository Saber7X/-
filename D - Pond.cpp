#include<iostream>
#include<algorithm>
#include<cstdio>
const int N=805;
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int num[N][N];
	for(long long int i=1;i<=n;i++)
	{
		for(long long int j=1;j<=n;j++)
		{
			cin>>num[i][j];
		}
	}
	long long int ans[N];
	long long int cntn=1;
	long long int flag=n+1-k;
	for(long long int i=1;i<=flag;i++)
	{
		for(long long int j=1;j<=flag;j++)
		{
			long long int num1[N]={0};
			long long int cnt=1;
			for(long long int o=i;o<=i+k-1;o++)
			{
				for(long long int l=j;l<=j+k-1;l++)
				{
					num1[cnt++]=num[o][l];
				}
			}
			sort(num1,num1+cnt);
			if(k*k%2==0)
			{
				ans[cntn++]=num1[k*k/2];
			}
			else
			{
				ans[cntn++]=num1[k*k/2+1];
			}
			//cout<<ans[cntn-1]<<endl;
		}
	}
	sort(ans,ans+cntn);
	cout<<ans[1];
	return 0;
}
