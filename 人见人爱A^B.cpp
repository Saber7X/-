//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long int n,m;
//	while(cin>>n>>m)
//	{
//		if(n==0&&m==0)
//		{
//			break;
//		}
//		long long int sum=1;
//		for(long long int i=1;i<=m;i++)
//		{
//			sum*=n;
//			sum%=1000;
//		}
//		cout<<sum<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	while(cin>>n>>m)
	{
		long long int sum=1;
		while(m>0)
		{
			if(m%2==0)
			{
				n*=n;
				m/=2;
			}
			else
			{
				sum*=n;
				n*=n;
				m/=2;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
