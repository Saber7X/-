#include<bits/stdc++.h>
using namespace std;
const long long int N=1e5+10;
struct tt{
	int x;
	int y;
}num[N*2];
long long int a[2*N];
int main() 
{
	long long int n,i,j,sum,s=0,maxn,f=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i].x>>num[i].y;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=max(abs(num[i].x-num[j].x),abs(num[i].y-num[j].y));
			a[s]=sum;
			s++;
		}
	}
	sort(a,a+s);
	maxn=a[s-1];
	for(i=s-1;i>=0;i--)
	{
		if(a[i]!=maxn&&a[i]!=0) 
		{
		   cout<<a[i]<<endl;
		   f=1;
		   break;	
		}
	}
	if(f==0) cout<<maxn<<endl;
	return 0;
}
