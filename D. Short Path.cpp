//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//const int N = 1550;
//int g[N][N];
//int d[N][N];
//
//signed main()
//{
//	int n;
//	cin >> n;
//	int ans = 0;
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= n ; j++ )
//		{
//			scanf("%lld", &g[i][j]);
//			d[i][j] = g[i][j];
//			ans += d[i][j];
//		}
//	}
//	for (int k = 1; k <= n; k ++ )
//	{
//		for (int i = 1; i <= n; i ++ )
//		{
//			for (int j = 1; j <= n; j ++ )
//			{
//				if (k == i || k == j) continue;
//				if (d[i][k] + d[k][j] < g[i][j])
//				{
//					cout << -1 << endl;
//					return 0;
//				}
//				if (g[i][j] < d[i][k] + d[k][j])
//				{
//					g[i][j] = 0;
//				}
//			}
//		}
//	}
//	
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= n; j ++ )
//		{
//			for (int k = 1; k <= n; k ++ )
//			{
//				if (k == i || k == j) continue;
//				
//				if (d[i][j] == d[i][k] + d[k][j])
//				{
//					ans -= d[i][j];
//					break;
//				}
//			}
//		}
//	}
//	cout << ans/2 << endl;
//	return 0;
//}

#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 550;
int d[N][N];
int g[N][N];

signed main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i ++ ) 
	{
		for (int j = 1; j <= n; j ++ )
		{
			cin >> g[i][j];
			d[i][j] = g[i][j];
			ans += g[i][j];
		}
	}
	for (int k = 1; k <= n; k ++ )
	{
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= n; j ++ )
			{
				if (i == k || j == k) continue;
				
				g[i][j] = min(g[i][k] + g[k][j], g[i][j]);
				if (g[i][j] != d[i][j]) 
				{
					cout << -1 << endl;
					return 0;
				}
			}
		}
	}
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			for (int k = 1; k <= n; k ++ )
			{
				if(i == k || k == j) continue;
				if (d[i][j] == d[i][k] + d[j][k])
				{
					ans -= d[i][j];
					break;
				}
			}
		}
	}
	cout << ans / 2 << endl;
	return 0;
}

