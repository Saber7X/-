#include<bits/stdc++.h>
using namespace std;
struct name{
	int x;
	int y;
}num[100];
bool cmp(name a,name b)
{
	if(a.x==b.x)
	{
		return a.y<b.y;
	}
	return a.x<b.x;
}
int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i].x>>num[i].y;
	}
	sort(num,num+n,cmp);
	printf("%d",abs(num[n-1].x-num[1].x)+abs(num[n-1].y-num[1].y));
	return 0;
}
