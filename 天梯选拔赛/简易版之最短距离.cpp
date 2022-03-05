#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[501];//所在位置 
	int b[501];//朋友的位置 
	int ans[501]={0}; 
	int x;int cnt=0;
	int c;int d;
	int a1=0,b1=0,c1=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)//几组数据 
	{
		scanf("%d",&x);//几个朋友 
		for(int j=0;j<x;j++)
		{
			scanf("%d",&b[j]);//朋友的位置
		}
		sort(b,b+x);
		d=b[x/2];
		for(int j=0;j<x;j++)
		{
			ans[cnt]+=abs(d-b[j]);
		}
		cnt++;
		
	 } 
	 for(int i=0;i<cnt;i++)
	 {
	 	printf("%d\n",ans[i]);
	 }

	return 0;
}

