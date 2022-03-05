#include<bits/stdc++.h>
using namespace std;
const int N =1010;
int n, V, a, b, c, v[N][N], w[N][N], f[N];
int main()
{
	cin >> V >> n;
	map<int, int> res;
	for(int i = 1; i <= n; i ++)
	{
		res[c] ++;
		cin >> a >> b >> c;
		v[c][ res[c] ] = a ;//组别，第几个，体积 
		w[c][ res[c] ] = b ;//组别， 第几个，价值 
	}
	for(int i = 1; i <= n; i ++) //组数 
	{
		for(int j = V; j >= 0; j --) //枚举体积 
		{
			for(int k = 0; k <= res[i]; k ++) //枚举第几个 
			{
				if(j >= v[i][k])
				{
					f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
				} 
			}
		}
	}
	cout << f[V] <<endl;
	return 0;
}
