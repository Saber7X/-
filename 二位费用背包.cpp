#include<bits/stdc++.h> 
using namespace std;
const int N = 1010;
int n, V, f[N][N], v, w, m, M;
int main()
{
	cin >> n >> V >> M;
	for(int i = 1; i <= n; i ++)
	{
		cin >> v >> m >> w;
		for(int j = V; j >= v; j --)//体积 
		{
			for(int k = M; k >= m; k --)//重量 
			{
				f[j][k] = max(f[j][k], f[j- v][k - m] + w);
			}
		}
	}
	cout << f[V][M] << endl;
	return 0;
}
