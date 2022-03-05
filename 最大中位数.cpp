#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;;
	int num[200005];
	int P=n/2;
	for(int i=1;i<=n;i++)
	{
		
		cin>>num[i-P];
	}
	sort(num,num+n-P);
	int a=2;
	while(1)
	{
		if(k<0)
		{
			num[1]--;
			break;
		}
		if(k==0)
		{
			break;
		}
		if(num[1]<num[a])
		{
			k-=(num[a]-num[1])*(a-1);
			num[1]=num[a];
		}
	}
	cout<<num[1];
	return 0;
}
