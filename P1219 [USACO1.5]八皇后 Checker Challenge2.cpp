#include<bits/stdc++.h>
using namespace std;
const int N = 200;
int g[N][N];
int n;
bool a[N], b[N], c[N], d[N];
int cnt = 0;
int ans[N];
void dfs (int u)
{
	if (u > n)
	{
		if (cnt < 3) 
		{
			for (int i = 1; i <= n; i ++ ) cout << ans[i] << " ";
			cout << endl;
		}
		
		cnt ++;
		return;
		
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (!a[i] && !b[u] && !c[i + u] && !d[i - u + n])
		{
			a[i] = 1;
			b[u] = 1;
			c[i + u] = 1;
			d[i - u + n] = 1;
			ans[u] = i;
			
			dfs(u + 1);
			
			a[i] = 0;
			b[u] = 0;
			c[i + u] = 0;
			d[i - u + n] = 0;
		}
	}
}



int main()
{
	cin >> n;
	dfs(1);
	cout << cnt << endl;
	return 0;
}
