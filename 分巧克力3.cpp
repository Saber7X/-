#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int w[N],h[N];
int n,k;
int chack(int a)
{
	int sum=0;//记录数量
	for(int i=0;i<n;i++)
	{
		sum+=(w[i]/a)*(h[i]/a);
	 } 
	 return sum;
}
int main()
{
	cin>>n>>k;
	int l=0;
		int r=N;
	for(int i=0;i<n;i++)
	{
		cin>>h[i]>>w[i];
	 }//这个循环应该单独写，之前下面的2分也写在循环里面了 
	while(l<r)
	{
		int mid=(l+r+1)/2;
		if(chack(mid)>=k)
		{
			l=mid;
		}
		else
		{
			r=mid-1;
		}
	}
	
	cout<<r;
	return 0;
}
