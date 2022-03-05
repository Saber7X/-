#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num[100005];
	scanf("%d",&n);
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	//sort(num,num+n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(num[i]-num[j]==j-i&&num[j]>=num[i])
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
