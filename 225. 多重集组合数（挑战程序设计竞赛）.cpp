//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 1e3 + 10;
//int a[N], f[N][N];
//int main()
//{
//	int n, m, M;
//	cin >> n >> m >> M;
//	for (int i = 1; i <= n; i ++ ) cin >> a[i];
//	f[0][0] = 1;
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 0; j <= m; j ++ )
//		{
//			for (int k = 0; k <= min(j, a[i]); k ++ )
//			{
//				f[i][j] = f[i][j] + f[i - 1][j - k];
//				f[i][j] %= M;
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//}
#include<bits/stdc++.h> 
using namespace std;
const int N = 1e3 + 10;
int a[N], f[N][N];
int main()
{
	int n, m, M;
	cin >> n >> m >> M;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	f[0][0] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 0; j <= m; j ++ )
		{
			if (j == 0) f[i][j] += f[i - 1][j];
			else if (1 <= j && j <= a[i]) f[i][j] += (f[i - 1][j] + f[i][j - 1]);
			else if (j > a[i]) f[i][j] += (f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1 - a[i]]);
			f[i][j] = (f[i][j] + M) % M; // 总之就是有减法就这么取模 https://blog.51cto.com/u_15127527/3994796
			
			
//			for (int k = 0; k <= min(j, a[i]); k ++ )
//			{
//				f[i][j] = f[i][j] + f[i - 1][j - k];
//				f[i][j] %= M;
//			}
		}
	}
	cout << f[n][m] << endl;
	return 0;
}

