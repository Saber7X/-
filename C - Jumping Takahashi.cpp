//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1005;
//int g[N][10];
//int n, x;
//
//int xx[4] = {1, 1, 1};
//int yy[4] = {-1, 1, 0};
//
//int f = 0;
//
//void dfs(int u, int sum)
//{
////     cout << u << endl;
//    if (sum > x) return;
//    if (u > n)
//    {
//        if (sum == x)
//        {
//            cout << "Yes" << endl;
//            f = 1;
//            return;
//        }
//        return;
//    }
//    for (int i = 1; i <= 2; i ++ )
//    {
//        dfs(u + 1, sum + g[u][i]);
//    }
//}
//
//int main()
//{
//	
//	cin >> n >> x;
//	int maxn = 0, minn = 0;
//	for (int i = 1; i <= n; i ++ )
//	{
//	    cin >> g[i][1] >> g[i][2];
//	    maxn += max(g[i][1], g[i][2]);
//	    minn += min(g[i][1], g[i][2]);
//	}
//	if (maxn == x || minn == x) cout << "Yes" << endl;
//	else if ()
//	dfs(1, 0);
//	if (!f)  cout << "No" << endl;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int f[N][N];
int g[N][N];
int main()
{
	int n, x;
	cin >> n >> x;
	
	for (int i = 1; i <= n; i ++ )
	{
		cin >> g[i][1] >> g[i][2];
	}
	f[0][0] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		int a = g[i][1], b = g[i][2];
		for (int j = 0; j <= x; j ++ )
		{
			if (j >= a && f[i - 1][j - a] == 1)
			{
				f[i][j] = 1;
			}
			if (j >= b && f[i - 1][j - b] == 1)
			{
				f[i][j] = 1;
			}
		}
	}
	if (f[n][x]) cout << "Yes" << endl;
	else cout << "No"  << endl;
	return 0;
}
