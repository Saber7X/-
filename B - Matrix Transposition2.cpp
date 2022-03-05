#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin >> n >> m;
	int g[n + 10][m + 10];
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
		}
	}
	for (int i = 1; i <= m; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			cout << g[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
