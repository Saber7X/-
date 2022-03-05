#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int k;//ÑùÀıÊı
	cin>>k;
	while(k--)
	{
		int num[1001]={0};
		int n;
		cin>>n;
		int x;
		int cnta[10001]={0};
		int cntb[10001]={0};
		for(int i=0;i<n;i++)
		{
			
			cin>>x;
			cnta[x]++;
			cntb[x]=i;
			
		}
		for(int i=0;i<=1001;i++)
		{
			if(cnta[i]==1)
			{
				cout<<cntb[i]+1<<endl;
			}
		}
	 } 
	return 0;
}
