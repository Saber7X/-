#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	int num[1001],res[20005]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		res[num[i]]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int sum;
			sum=num[i]+num[j];
			if(res[sum]==1)
			{
//				cout<<num[i]<<" "<<num[j]<<" "<<sum<<endl;
				res[sum]=10;
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
