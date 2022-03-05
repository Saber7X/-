#include<bits/stdc++.h>
using namespace std;
const int N = 105, M = 10005;
int f[N][M];
int n, m;
int v[N], w[N];

int main()
{
	cin >> n >> m;
	memset(f,0x3f3f3f3f,sizeof(f));
	
//	for (int i = 1; i <= n; i ++ ) f[i][0] = 0x3f3f3f3f;
	f[0][0] = 0;
	for (int i = 1; i <= n; i ++ ) cin >> v[i] >> w[i];
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 0; j <  M; j ++ )
		{
			f[i][j] = f[i - 1][j];
			if (j >= w[i])
			{
				f[i][j] = min(f[i][j], f[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	int res = 0;
	for (int i = M - 1; i >= 0; i -- )
	{
		if (f[n][i] <= m) 
		{
			res = i;
			break;
		}
	}
	cout << res << endl;
	return 0;
}
