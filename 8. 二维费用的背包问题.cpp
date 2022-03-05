#include<bits/stdc++.h>
using namespace std;
const int N = 1005;

int n, m, ss;
int v[N];
int s[N];
int w[N];
int f[N][N];

int main()
{
	cin >> n >> m >> ss;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> v[i] >> s[i] >> w[i];
	}
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = m; j >= v[i]; j -- )
		{
			for (int k = ss; k >= s[i]; k -- )
			{
				f[j][k] = max(f[j - v[i]][k - s[i]] + w[i], f[j][k]);
			}
		}
	}
	cout << f[m][ss] << endl;
	return 0;
}
