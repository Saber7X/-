#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a;
		int maxnn=0,maxn=0;
		int num[10005]={0},num1[10005]={0},sum[10005]={0},sum1[10005]={0};
		for(int i=1;i<=a;i++) 
		{
			cin>>num[i];
			sum[i]=sum[i-1]+num[i];
			maxn=max(sum[i],maxn);
		}
		cin>>b;
		for(int i=1;i<=b;i++)
		{
			cin>>num1[i];
			sum1[i]=sum1[i-1]+num1[i];
			maxnn=max(maxnn,sum1[i]);
		}
		cout<<maxn+maxnn<<endl;
		
	}
	return 0;
}
