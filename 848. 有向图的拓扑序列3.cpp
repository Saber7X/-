#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int n, m;
int h[N], ne[N], e[N], idx;
int d[N];
int q[N], hh = 1, tt = 0;

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx ++;
}

bool topsort()
{
	for (int i = 1; i <= n; i ++ )
	{
		if (d[i] == 0)
		{
			q[++tt] = i;
		}
	}
	while (hh <= tt)
	{
		int t = q[hh++];
		for (int i = h[t]; i != -1; i = ne[i]) 
		{
			int j = e[i];
			d[j] --;
			if (d[j] == 0)
			{
				q[ ++ tt] = j;
			}
		}
	}
	return tt == n;
}

int main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b; cin >> a >> b;
		add(a, b);
		d[b] ++;
	}
	if (topsort()) for (int i = 1; i <= tt; i ++ ) cout << q[i] << " ";
	else cout << "-1" << endl;
	return 0;
}

