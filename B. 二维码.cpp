#include<bits/stdc++.h> 
using namespace std;
const int N = 200;
char g[N][N];

signed main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			cin >> g[i][j];
		}
	}
	if (g[1][1] == '*' && g[1][n] == '*')
	{
		if (g[n][1] == '*')
		{
			for (int i = 1; i <= n; i ++ )
			{
				for (int j = 1; j <= n; j ++ )
				{
					cout << g[i][j];
				}
				cout << endl;
			}
		}
		if (g[n][n] == '*')
		{
			for (int i = n; i >= 1; i -- )
			{
				for (int j = 1; j <= n; j ++ )
				{
					cout << g[j][i];
				}
				cout << endl;
			}
		}
	}
	if (g[1][1] == '*' && g[n][1] == '*')
	{
		if (g[n][n] == '*')
		{
			for (int i = 1; i <= n; i ++ )
			{
				for (int j = n; j >= 1; j -- )
				{
					cout << g[j][i];
				}
				cout << endl;
			}
		}
	}
	if (g[1][n] == '*' && g[n][n] == '*' && g[n][1] == '*')
	{
		for (int i = n; i >= 1; i -- )
		{
			for (int j = n; j >= 1; j -- )
			{
				cout << g[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
