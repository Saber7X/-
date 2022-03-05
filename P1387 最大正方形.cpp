#include<bits/stdc++.h>
using namespace std;
int g[1006][1006] = {0};
int f[1006][1006] = {0};
int main()
{
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ ) 
		{
			cin >> g[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (g[i][j] != 0)
			{
				f[i][j] = min(f[i - 1][j], min(f[i - 1][j - 1], f[i][j - 1])) + 1;
				ans = max(ans, f[i][j]);
			}
		}
	}
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= m; j ++ )
//		{
//			cout << f[i][j] << " ";
//		}
//		cout << endl;
//	}
	cout << ans << endl;
	return 0;
}
