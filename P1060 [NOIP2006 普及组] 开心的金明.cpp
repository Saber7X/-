#include<bits/stdc++.h>
using namespace std;
const int N = 30010;
int n, m, f[N], v, w;
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= m; i ++)
	{
		cin >> v >> w;
		for(int j = n; j >= v; j --)
		{
			f[j] = max(f[j], f[j - v] + v * w);
		}
	}
	cout << f[n] << endl;
	return 0;   
}
