#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,k;
	cin>>n>>k;
	int num[100]={0};
	int tih[100]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>tih[i];
	}
	if(n==1) cout<<n+k;
	else
	{
		sort(tih,tih+n+1);
		int cnt=0;
		for(int i=n/2+1;i<=n;i++)
		{
			num[cnt++]=tih[i];
		}
		int a=2;
		while(1)
		{
			if(num[1]<num[a])
			{
				if(k>=(num[a]-num[1])*(a-1))
				{
					k-=(num[a]-num[1])*(a-1);
					num[1]=num[a];
				}
				else
				{
					num[1]+=k/(a-1)+1;
					break;
				}
			}
			a++; 
		} 
		cout<<num[1];
	}
	
	return 0;
}
