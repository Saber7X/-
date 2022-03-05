#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;

int n, m;
bool st[N];
int h[N], e[N], ne[N], w[N], idx;

void add(int a, int b, int c)
{
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx ++;
}

int prim()
{
	memset(d, 0x3f3f3f3f, sizeof d);
	d[1] = 0;
	st[1] = 1;
	
	for (i = 1; i <= n; i ++ )
	{
		int t = -1;
		for (int j = 1; j <= m; j ++ )
		{
			if (!st[j] && (t == -1 || d[t] > d[j])) t = j;
		}
		
		if (t == -1 || d[t] == 0x3f3f3f3f) return -1;
		for (int i = 1)
		
	}
}


int main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b, c; cin >> a >> b >> c;
	}
	return 0;
}
