#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int g[N][N];
int sum[N][N];
int main()
{
	int n, m ,c;
	cin >> n >> m >> c;
	for (int i = 1; i <= n; i ++)
	{
		for (int j = 1; j <= m;j ++ )
		{
			cin >> g[i][j];
		}
	}
	for (int i = 1; i <= n; i ++ )
	{
		sum[i][1] = sum[i - 1][1] + g[i][1];
	}
	for (int i = 1; i <= m; i ++ )
	{
		sum[1][i] = sum[1][i - 1] + g[1][i];
	}
	for (int i = 2; i <= n; i ++ )
	{
		for (int j = 2; j <= m; j ++ )
		{
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + g[i][j];
		}
	}
	
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= m; j ++ )
//		{
//			cout << sum[i][j] << " ";
//		}
//		cout << endl;
//	}
	
	int ans = -0x3f3f3f3f;
	int x, y;
	for (int i = c; i <= n; i ++ )
	{
		for (int j = c; j <= m; j ++ )
		{
			int a = sum[i][j] + sum[i - c][j - c] - sum[i - c][j] - sum[i][j - c];
			if (ans < a)
			{
				ans = a;
				x = i - c + 1;
				y = j - c + 1;
			}
		}
	}
	cout << x <<" " << y<< endl;
//	cout << ans << endl;
	return 0;
}
