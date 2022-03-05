#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e7 + 10;
int flag[] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608};
int n; 
bool st[N];
bool f = 0;
int ans[N];
void dfs(int u, int v)
{
	if (f == 1) return;
	if (u == n) 
	{
		for (int i = 1; i < v; i ++ )
		{
			cout << ans[i] << " ";
		}
		f = 1;
		return;
	}
	for (int i = 0; i < 10 ; i ++ )
	{
		if (!st[i])
		{
			st[i] = 1;
			ans[v] = flag[i];
			dfs(u + flag[i], v + 1);
			if (f == 1) return;
			st[i] = 0;
		}
	}
}

signed main()
{
	cin >> n;
	if (n % 2 != 0 || n <= 0) 
	{
		cout << "-1" << endl;
		return 0;
	}
	else if (n % 2 == 0) 
	{
		int x = n;
		int an=0;
		while (1)
		{
			if (x % 2 != 0 && x != 1)
			{
				break;
			}
			if (x == 1)
			{
				f = 1;
				break;
			}
			an++;
			x /= 2;
		}
		if (f) 
		{
			cout << flag[an - 1] << endl;
		}
		else
		{
			cout << -1 << endl;
		}
		
	}
//	if (!f)
//	{
//		dfs(0, 1);
//		if (!f) cout << "-1";
//	}
		
	
	return 0;
}
