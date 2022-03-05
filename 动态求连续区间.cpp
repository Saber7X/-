#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e5+5;

int tr[N];
int n,m;

int lowbit(int x)
{
	return  x&-x;
}

void add(int x,int v)
{
	for(int i=x;i<=n;i+=lowbit(i))
	{
		tr[i]+=v; 
	}
}

int query(int x)
{
	int res=0;
	for(int i=x;i>0;i-=lowbit(i))
	{
		res+=tr[i];
	}
	return res;
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int num;
		cin>>num;
		add(i,num);
	}
	while(m--)
	{
		int k,a,b;
		cin>>k>>a>>b;
		if(k==1)
		{
			add(a,b);
		}
		else
		{
			cout<<query(b)-query(a-1)<<endl;
		}
	}
	return 0;
}
