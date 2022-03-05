#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> res;
long long int n,num[300005]={0},cnt=0,sum=0;
int main()
{
	cin>>n;
	for(long long int i=1;i<=n;i++)
	{
		cin>>num[i];
		if(res[num[i]]==0)
		{
			cnt++;
		}
		res[num[i]]++;
	
	}
	for(long long int i=1;i<=n;i++)
	{
		sum+=(n-res[num[i]]);//这样算会有重复的，正好是两倍 
	}
	cout<<sum/2;
	return 0;
}
	
	
