#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int aa[a+1]={0};
	int bb[b+1]={0};
	for(int i=0;i<a;i++)
	{
		cin>>aa[i];
	}
	for(int j=0;j<b;j++)
	{
		cin>>bb[j];
	}
	int cnta=0,cntb=0;
	int x=0,y=0;
	while(n--)
	{
		if(x==a)
		{
			x=0;
		}
		if(y==b)
		{
			y=0;
		}
		
		
		if(aa[x]==0&&bb[y]==1)
		{
			cnta++;
		}
		if(aa[x]==0&&bb[y]==2)
		{
			cntb++;
		}
		if(aa[x]==0&&bb[y]==3)
		{
			cntb++;
		}
		if(aa[x]==0&&bb[y]==4)
		{
			cnta++;
		}
		
		
		if(aa[x]==1&&bb[y]==0)
		{
			cntb++;
		}
		if(aa[x]==1&&bb[y]==2)
		{
			cnta++;
		}
		if(aa[x]==1&&bb[y]==3)
		{
			cntb++;
		}
		if(aa[x]==1&&bb[y]==4)
		{
			cnta++;
		}
		
		if(aa[x]==2&&bb[y]==0)
		{
			cnta++;
		}
		if(aa[x]==2&&bb[y]==1)
		{
			cntb++;
		}
		if(aa[x]==2&&bb[y]==3)
		{
			cnta++;
		}
		if(aa[x]==2&&bb[y]==4)
		{
			cntb++;
		}
		
		
		if(aa[x]==3&&bb[y]==0)
		{
			cnta++;
		}
		if(aa[x]==3&&bb[y]==1)
		{
			cnta++;
		}
		if(aa[x]==3&&bb[y]==2)
		{
			cntb++;
		}
		if(aa[x]==3&&bb[y]==4)
		{
			cntb++;
		}
		
		//下面一块 之前有bug 
		if(aa[x]==4&&bb[y]==0)
		{
			cntb++;
		}
		if(aa[x]==4&&bb[y]==1)
		{
			cntb++;
		}
		if(aa[x]==4&&bb[y]==2)
		{
			cnta++;
		}
		if(aa[x]==4&&bb[y]==3)
		{
			cnta++;
		}
		x++,y++;
	}
	cout<<cntb<<" "<<cnta;
	return 0;
}
