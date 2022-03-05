#include<bits/stdc++.h> 
using namespace std;
const int N = 305;
int g[N][N];
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, k;
		cin >> n >> k;
		memset(g, 0, sizeof g);
		int f = k / n;
		int cnt = k % n;
		int ans;
		if (cnt == 0)
		{
			ans = 0;
		}
		else
		{
			ans = 2; 
		}
		for (int i = 1; i <= n; i ++ )
		{
			if (cnt > 0)
			{
				int sum = i + f;
				for (int j = i; j <= min(sum, n); j ++ )
				{
					g[i][j] = 1;
				}
				for (int j = 1; j <= f - (n - i + 1) + 1; j ++ )
				{
					g[i][j] = 1;
				}
				cnt --;
			}
			else
			{
				int sum = i + f - 1;
				for (int j = i; j <= min(sum, n); j ++ )
				{
					g[i][j] = 1;
				}
				for (int j = 1; j <= f - (n - i + 1); j ++ )
				{
					g[i][j] = 1;
				}
			}
		}
		cout << ans << endl;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= n; j ++ )
			{
				cout << g[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
