#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int flag=n/4;
		if(n%4!=0)
		{
			flag++;
		}
		for(int i=1;i<=n-flag;i++)
		{
			cout<<"9";
		}
		for(int i=1;i<=flag;i++)
		{
			cout<<"8";
		}cout<<endl;
	}
	return 0;
}
//100110011000
//1111100111
