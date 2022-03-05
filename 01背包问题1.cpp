#include <bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 1010;

int v[N], w[N], n, V, f[N];

signed main()
{
	cin >> n >> V;
	for(int i = 1; i <= n; i ++)
	{
		cin >> v[i] >> w[i];
	}
	
	for(int i = 1; i <= n; i ++)
	{
		for(int j = V; j >= v[i]; j --)
		{
			f[j] = max(f[j], f[j - v[i]] + w[i]);
		}
	}
	
	cout << f[V];//输出该背包体积下存储物品的最大价值 
	
	return 0;
}
