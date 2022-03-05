#include<iostream>
#include<cstdio> 
#include<algorithm>
using namespace std;
int n,m;
const int N=100005;
int tr[N];
int lowbit(int x)
{
	return x&-x;
}

void add(int x,int v)
{
	for(int i=x;i<=n;i+=lowbit(i))
	{
		tr[i]+=v;
	}
}



int main()
{
	
	return 0;
}
