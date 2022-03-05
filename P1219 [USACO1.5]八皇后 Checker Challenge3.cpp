#include<bits/stdc++.h>
using namespace std;
const int N = 200;

bool a[N], b[N], c[N], d[N];

int n;
int cnt =0;
int ans[N];

void dfs(int u)
{
	if (u > n)
	{
		if (cnt < 3)
		{
			for (int i = 1; i <= n; i ++ )
			{
				cout << ans[i] << " ";
			}
			cout << endl;
		}
		cnt ++;
		return;
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		int x = u;
		int y = i;
		if (a[x] == 0 && b[y] == 0 && c[x + y] == 0 && d[x - y + n] == 0)
		{
			a[x] = 1;
			b[y] = 1;
			c[x + y] = 1;
			d[x - y + n] = 1;
			ans[u] = i;
			
			dfs(u + 1);
			
			a[x] = 0;
			b[y] = 0;
			c[x + y] = 0;
			d[x - y + n] = 0;
		}
	}
	//return
}


int main()
{
	cin >> n;
	dfs(1);
	cout << cnt <<endl;
	return 0;
}
