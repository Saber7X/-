#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int n,num[10005],sum=0,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		if(sum+num[i]>0) s++,sum+=num[i];
		if(sum+num[i]==0&&i==n) s++;
	}
	cout<<s<<endl;
	return 0;
}
