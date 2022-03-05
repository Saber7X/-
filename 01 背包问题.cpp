//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 1006;
//
//int n, m;
//int v[N], w[N];
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i  = 1; i <= n; i ++ )
//	{
//		cin >> v[i] >> w[i]; //体积和价值 
//	}
//	for (int i = 1; i <= n; i ++ ) //枚举前 i 种物品 
//	{
//		for (int j = 0; j <= m; j++ ) // 枚举体积 
//		{
//			if (j >= v[i])
//			{ 
//				f[i][j] = max(f[i - 1][j - v[i]] + w[i], f[i - 1][j]);
//			}
//			else
//			{
//				f[i][j] = f[i - 1][j];
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//}

#include<bits/stdc++.h> 
using namespace std;
const int N = 1006;

int n, m;
int v[N], w[N];
int f[N];

int main()
{
	cin >> n >> m;
	for (int i  = 1; i <= n; i ++ )
	{
		cin >> v[i] >> w[i]; //体积和价值 
	}
	for (int i = 1; i <= n; i ++ ) //枚举前 i 种物品 
	{
		for (int j = m; j >= v[i]; j -- ) // 枚举体积 
		{
			f[j] = max(f[j - v[i]] + w[i], f[j]);
		}
	}
	cout << f[m] << endl;
	return 0;
}

