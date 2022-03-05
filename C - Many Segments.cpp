#include<bits/stdc++.h>
using namespace std;

struct name
{
	double l,r;
}num[2005];

bool cmp(name a,name b)
{
	if(a.l==b.l)
	{
		return a.r<b.r;
	}
	return a.l<b.l;
}

int main()
{
	long long int n,cnt=0;
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
		long long int t;
		cin>>t>>num[i].l>>num[i].r;
		if(t==2)
		{
			num[i].r-=0.1;
		}
		if(t==3)
		{
			num[i].l+=0.1;
		}
		if(t==4)
		{
			num[i].l+=0.1;
			num[i].r-=0.1;
		}
	}
	sort(num,num+n,cmp);
//	for(int i=0;i<n;i++)
//	{
//		cout<<num[i].l<<" "<<num[i].r<<endl;
//	}
	for(long long int i=0;i<n-1;i++)
	{
		for(long long int j=i+1;j<n;j++)
		{
			if(num[i].r>=num[j].l)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
