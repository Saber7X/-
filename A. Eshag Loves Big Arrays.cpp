#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		int num[1000]={0};
		int res[1000]={0};
		int sum=0;
		int minn=1000;
		for(int i=1;i<=n;i++)
		{
			cin>>num[i];
			minn=min(num[i],minn);
			res[num[i]]++;
		}
		cout<<n-res[minn]<<endl;
		
		
	}
	return 0;
 } 
