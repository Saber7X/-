//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 1010, mod = 1e9+7;
//int n, k, f[N][N][2];
//int main()
//{
//	int t;
//	cin >> t;
//	while(t -- )
//	{
//		cin >> n >> k;
//		for(int i = 1; i <= k; i ++ ) f[0][i][1] = f[n + 1][i][0] = 1;
//		for(int i = 1; i <= n; i ++ ) f[i][1][1] = f[i][1][0] = 1;
//		
//		for(int j = 1; j <= k; j ++ )
//		{
//			for(int i = n; i >= 1; i -- )
//			{
//				f[i][j][0] = (f[i + 1][j][0] + f[i - 1][j - 1][1]) % mod;
//			}
//			for(int i = 1; i <= n; i ++ )
//			{
//				f[i][j][1] = (f[i - 1][j][1] + f[i + 1][j - 1][0]) % mod;
//			}
//		}
//		cout << f[1][k][0] << endl;
//	}
//
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int f[1010][1010];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, k;
		cin >> n >> k;
		for(int i = 1; i <= n; i ++ ) f[i][1] = 1;//无论有几面墙，能量为1都是最后一步
		 for(int i = 1; i <= k; i ++ ) f[0][i] = 1;//前面没有墙 
		for(int j = 2; j <= k; j ++ )
		{
			for(int i = 1; i <= n; i ++ )
			{
				f[i][j] = (f[i - 1][j] + f[n - i][j - 1]) % mod;
			}
		}
		cout << f[n][k] << endl;
	}
}
