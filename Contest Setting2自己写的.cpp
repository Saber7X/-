#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1005, mod = 998244353;

int a[N] ;
int f[N][N];
int n, k;
int cnt = 1;
map<int, int> res;
int w[N];

signed main()
{
	cin >> n >> k;
	
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		res[a[i]] ++;
	}
	
	for (auto i : res)
	{
		w[cnt ++ ] = i.second;
	}
	cnt --;
//	for (int i = 1; i <= cnt; i ++ ) cout << w[i] << " ";
	
	//初始化应从0开始 
	for (int i = 0; i <= cnt; i ++ ) f[i][0] = 1;
	
	for (int i = 1; i <= cnt; i ++ )
	{
		for (int j = 1; j <= k; j ++ )
		{
			f[i][j] = f[i - 1][j - 1] * w[i] % mod + f[i - 1][j];
			f[i][j] %= mod;
		}
//		for (int j = 1; j <= k; j ++ )
//		{
//			cout << f[i][j] << " ";
//		}
//		cout << endl;
	}
	cout << f[cnt][k] % mod << endl;
	return 0;
}
