#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n;
	cin>>n;
	int res[1001]={0};
	while(n--)
	{
		int k;
		cin>>k;
		while(k--)
		{
			int x;
			cin>>x;
			res[x]++;
		}
		
	}
	int maxn=-1;
	int flag;
	for(int i=0;i<1001;i++)
	{
		if(res[i]>maxn)
		{
			maxn=res[i];
			flag=i;
		}
		else if(res[i]==maxn)
		{
			maxn=res[i];
			flag=i;
		}
	}
	cout<<flag<<" "<<maxn;
	return 0;
}
