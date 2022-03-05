#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

long long int n;	
long long int num[100005];

bool check(long long int x)
{
	for(long long int i=1;i<=n;i++)
	{
		x=2*x-num[i];
		if(x>=1e5)
		{
			return true;//如果大于1e5就超过了范围，说明这个数打了，所以此时返回true; 
		}
		if(x<0)
		{
			return false;
		}
		
	}
	return true;
}
//假设正确答案是a;
//通过推理可得如果a是最小的满足要求的答案，那么比a大的所有数都满足要求 
//所以答案可以通过二分来找，因为要找最小，所以就相当于是二分找左端点
//所以r=mid,l=mid+1;
  
int main()
{

	cin>>n;
	long long int sum;
	for(long long int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	long long int l=0;
	long long int r=1e5; 
	while(l<r)
	{
		long long int mid= (l+r)/2;
		if(check(mid))//如果mid满足要求，说明在正确答案的右边，就是 
		{
			r=mid;
		}
		else                                                                                                                
		{
			l=mid+1;
		}
	}
	cout<<r;
	return 0;
}
