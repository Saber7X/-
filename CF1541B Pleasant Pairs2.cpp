#include<bits/stdc++.h>
using namespace std;
int main()
{		
	int t;
	cin>>t;
	while(t--)
	{	
		long long int n,a[200005]={0},b[200005]={0};
		int ans=0;
		scanf("%lld",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			b[a[i]]=i;
		}
		sort(a+1,a+n+1);
		
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n&&a[i]*a[j]<2*n;j++)
			{
				if(a[i]*a[j]==b[a[i]]+b[a[j]])
				{
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}	
	return 0; 
}		
