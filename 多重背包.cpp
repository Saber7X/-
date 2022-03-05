//**********完全背包二维 + 三重循环 
//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//const int N = 1010;
//int n, V, w[N], v[N], f[N][N];
//signed main()
//{
//	cin >> n >> V;
//	for(int i = 1; i <= n; i ++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	for(int i = 1; i <= n; i ++)
//	{
//		for(int j = 0; j <= V; j ++)
//		{
//			for(int k = 0; v[i] * k <= j; k ++)
//			{
//				f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k );
//			}
//		}
//	}
//	cout << f[n][V];
//	return 0;
//}

//完全背包一维 + 双重循环 
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1010;
int n, V, w[N], v[N], f[N];

signed main()
{
	cin >> n >> V;
	for(int i = 1; i <= n; i ++)
	{
		cin >> v[i]  >> w[i];
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = v[i]; j <= V; j ++)
		{
			
		}
	}
	return 0;
 } 
