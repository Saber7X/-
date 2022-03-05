#include<bits/stdc++.h> 
using namespace std;
const int N = 100005;
int e[N*2], ne[N*2], a, b, h[N], idx, n, ans = N;
bool st[N];

//以U为根的子树中点的数量 
int dfs(int u)
{
    int  sum=0, res=0;
	st[u] = true;
	for(int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i]; 
		if(!st[j])
		{
			int s = dfs(j);
			res = max(res, s);
			sum += s;
		}
	}
	res = max(res, n - sum - 1);
	ans = min(ans, res);
	return sum + 1;
}

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}
int main()
{
	memset (h, -1, sizeof h);
	cin >> n;
	for(int i = 0; i < n-1; i ++ )
	{
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	dfs(1);
	cout << ans;
	return 0;
}
