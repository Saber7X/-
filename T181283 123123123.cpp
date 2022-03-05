#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;
		long long int cnt=1;
		long long  int num[10005]={0};
		long long  int sum[10005]={0};
		bool s=0;
		for(long long int i=1;i<=1000000000000;i++)
		{
			for(long long int j=1;j<=i;j++)
			{
				num[cnt]=j;
				sum[cnt]=num[cnt]+sum[cnt-1];
				cnt++;
				if(cnt>r)
				{
					s=1;
					break;
				}
			}
			if(s==1)
			{
				break;
			}
		}
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}
