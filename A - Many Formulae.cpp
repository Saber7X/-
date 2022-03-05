#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int sum=0,sum1=0;
	int num[100005],flag=0;// 
	for(int i=0;i<n;i++) 
	{
		cin>>num[i];
	}
	//sort(num,num+n);
	for(int i=0;i<n;i++) 
	{
		if(i!=0)
		{
			sum1+=num[i];
		}
		sum+=num[i];
		sum%=1000000007;//994459658
		sum1%=1000000007;//128347994
	}
	long long int ans=(sum*n-sum1*60)%1000000007;
	cout<<ans;
	return 0;
}
//279919144
//2757108916

