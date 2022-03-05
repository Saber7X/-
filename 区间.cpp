#include<bits/stdc++.h>
using namespace std;
struct name{
	int head;
	int tail;
	
}num[2500];
	
bool cmp2(name a,name b)
{
	return a.tail<b.tail;
}
	
int main()
{
	int n;
	int cnt=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>num[i].head>>num[i].tail;
	}
	sort(num,num+n,cmp2);
	
	int flag=num[0].tail;
	for(int i=0;i<n;i++)
	{
		if(num[i].head>=flag)
		{
			cnt++;
			flag=num[i].tail;
		}
	}
	printf("%d",cnt);
	return 0;
 } 
