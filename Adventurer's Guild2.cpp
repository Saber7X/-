#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int N = 305;
int n, V, f[N][N], v, w, m, M;
signed main()
{
	cin >> n >> V >> M;
	for(int i = 1; i <= n; i ++)
	{
		cin >> v >> m >> w;
		for(int j = V; j > v; j --)//��� 
		{
			for(int k = M; k >= 0; k --)//���� 
			{
				if(k - m >=0)
				{
					f[j][k] = max(f[j][k], f[j- v][k - m] + w);
				}
				else if(j - v + k - m > 0)
				{
					f[j][k] = max(f[j][k], f[j - v + k - m][0] + w);
				}
				
					
				  
			}
		}
	}
	cout << f[V][M] << endl;
	return 0;
}
