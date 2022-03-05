#include<bits/stdc++.h>
using namespace std;
int m;
int w[10] = {0, 8, 18, 28, 58, 128, 198, 388};
int v[10] = {0, 1, 6, 28, 88, 198, 328, 648};
int f[20][20000];
int main()
{
	cin >> m;
	for (int i = 1; i <= 7; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			
			if (j >= v[i])
			{
				f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i]] + w[i]);
			}
			else
			{
				f[i][j] = f[i - 1][j];
			}
		}
	}
	cout << m * 10 + f[7][m] << endl;
	return 0;
}
