#include<bits/stdc++.h>
using namespace std;
struct name{
	int x,y,x1,y1;
	int nn;
}num[10004];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>num[i].x>>num[i].y>>a>>b;
		num[i].x1=num[i].x+a;
		num[i].y1=num[i].y+b;
		num[i].nn=i;
	}
	int xx,yy;
	cin>>xx>>yy;
	bool t=1;
	for(int i=n;i>=1;i--)
	{
		if(xx>=num[i].x&&xx<=num[i].x1&&yy>=num[i].y&&yy<=num[i].y1)
		{
			t=0;
			cout<<num[i].nn;
			break;
		}
	}
	if(t==1)
	{
		cout<<"-1";
	}
	
	return 0;
}
