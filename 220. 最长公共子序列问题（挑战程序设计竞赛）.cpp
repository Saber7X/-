#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int f[N][N];
char s1[N], s2[N];
int main()
{
	int n, m;
	cin >> n >> m;
	scanf("%s %s", s1 + 1, s2 + 1);
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (s1[i] == s2[j]) 
			{
				f[i][j] = f[i - 1][j - 1] + 1;
			}
			else 
			{
				f[i][j] = max(f[i - 1][j], f[i][j - 1]);
			}
		}
	}
	cout << f[n][m] << endl;
	return 0;
}
