#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

bool st[N];
int h[N * 2], ne[N * 2], e[N * 2], idx;
int n; 

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx;
	idx ++;
}

int ans = 1e9 + 10;

int dfs(int u)
{
	st[u] = true;
	int res = 0, sum = 1;
	for (int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!st[j])
		{
			int s = dfs(j);
			res = max(res, s);//取最大的连通块
			sum += s; 
		}
	}
	res = max(res, n - sum);
	ans = min(ans, res);
	return sum;
}

int main()
{
	memset(h, -1, sizeof h);
	cin >> n;
	for (int i = 1; i < n; i ++ )
	{
		int a, b;
		cin >> a >> b;
		add (a, b); 
		add (b, a);
	}
	dfs(1);
	cout << ans << endl;
	return 0;
}
