//只要依次输出奇数和 偶数即可 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<1<<endl;
		}
		else if(n==2)
		{
			cout<<"-1"<<endl;
			
		}
		else if(n==3)
		{
			cout<<"2 9 7"<<endl<<"4 6 3"<<endl<<"1 8 5"<<endl;
		}
		else
		{
			long long int ans[10005]={0};
			int cnt=0;
			for(int i=1;i<=n*n;i++)
			{
				if(i%2!=0)
				{
					ans[cnt++]=i;
				}
			}
			for(int i=1;i<=n*n;i++)
			{
				if(i%2==0)
				{
					ans[cnt++]=i;
				}
			}
			cnt=0;
			int num[105][105]; 
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					cout<<ans[cnt]<<" ";
					cnt++;
				}
				cout<<endl;
			}
		}
	 } 
	return 0;
}
