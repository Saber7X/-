#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	double sum[10]={0};
	sum[0]={0.0};
	sum[1]={2.0};
	sum[2]={2.0};
	sum[3]={4.0};
	sum[4]={5.0};
	sum[5]={5.0};
	sum[6]={11.0};
	sum[7]={11.0};
	sum[8]={19.0};
	while(t--)
	{
		long long int x;
		cin>>x;
		double ans;
		
		ans=x/8*19+sum[x%8];
		cout<<(int)ans<<" ";
		long long int ss=(int)sqrt(ans);
		if(ss*ss==(int)ans)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
	
}
