#include<bits/stdc++.h> 
using namespace std;
const int N = 100005;

int e[N], ne[N], h[N], idx;
int q[N], d[N];
int n, m;

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}

bool topsort()
{
	int hh = 0, tt = -1;
	for(int i = 1; i <= n; i ++ )//枚举点 
	{	
		//int j = e[j];
		if(d[i] == 0)//将入度为0的点放进队列 
		{
			q[++tt] = i;
		}
	}
	while(hh <= tt)//找每条对每个入度为0的点下面的点进行操作 
	{
		int t = q[hh ++];
		for(int i = h[t]; i != -1; i = ne[i] )
		{
			int j = e[i];
			d[j] --;//因为第一个点是入度为0，所以不构成限制，所以它的下一个点入度就 --
			if(d[j] == 0)//如果为0，说明排好序了，就放进队列 
			{
				q[++tt] = j;
			}
		}
	}
	return tt == n - 1;
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	for(int i = 1; i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		d[b] ++;
	}
	if(topsort())
	{
		for(int i = 0; i < n; i ++ )
		{
			cout << q[i] << " ";
		}
	}
	else
	{
		cout << " -1 ";
	}
	return 0;
}
