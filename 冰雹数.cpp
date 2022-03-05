#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int num[100];
int f(int u)
{
	if(u==1)
	{
		sort(num,num+cnt);
		printf("%d",num[cnt]);
		return 0;
	}
	if(u%2==0)
	{
		 num[cnt++]=u/2;
		 f(u/2);
	}
	if(u%2!=0)
	{
		num[cnt++]=u*3+1;
		f(u*3+1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	f(n); 
	return 0;
}
