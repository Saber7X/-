#include<cstdio> 
#include<algorithm>
#include<iostream>
using namespace std;
const int N=32005;
int tr[N];
int level[N];
int n;
int lowbit(int x)
{
	return x&-x;
}
void add(int x)
{
	for(int i=x;i<=N;i+=lowbit(i))
	{
		tr[i]++;
	}
}
int query(int x)
{
	int ans=0;
	for(int i=x;i>0;i-=lowbit(i))
	{
		ans+=tr[i];
	}
	return ans;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		x++;
		add(x);
		level[query(x)]++;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",level[i]);
	}
	return 0;
}
