#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1[500];
	int num2[500];
	int res[500]={0};
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num1[i];
		res[num1[i]]++;
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>num2[i];
		res[num2[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		int t=0;
		if(num1[i]==num1[i-1])
		{
			continue;
		}
		for(int j=1;j<=n;j++)
		{
			if(num2[j]==num1[j-1])
			{
				continue;
			}
			if(res[num1[i]+num2[j]]==0)
			{
				cout<<num1[i]<<" "<<num2[j]<<endl;
				t=1;
				break;
			}
		}
		if(t==1)
		{
			break;
		}
	}
	return 0;
	
}
