#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#define int long long

using namespace std;

const int N = 1010, M = 2000010, INF = 1000000000;

int n, m;
int d[N][N];    // 存储两点之间的最短距离

signed main()
{
    while (scanf("%d", &n))
    {
    	if (n == 0) break;
    	for (int i = 1; i <= 30; i++)
        	for (int j = 1; j <= 30; j++)
            	d[i][j] = i == j ? 0 : INF;
        int m = 0;
	    for (int i = 0; i < n; i++)
	    {
	        int a, b, c;
	        cin >> a >> b >> c;
	        m = max(m, a);
	        m = max(m, b);
	        d[a][b] = d[b][a] = min(c, d[a][b]);
	    }
	    // floyd 算法核心
	    for (int k = 0; k <= m; k++)
	        for (int i = 0; i <= m; i++)
	            for (int j = 0; j <= m; j++)
	                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	    
	    int f = -1, ans = INF;
	    for (int i = 0; i <= m; i ++ )
	    {
	    	int sum = 0;
	    	for (int j = 0; j <= m; j ++ )
	    	{
	    		if (i == j) continue;
	    		sum += d[i][j];
			}
			if (sum < ans)
			{
				ans = sum;
				f = i;
			}
		}
	    cout << f << " " << ans << endl;
	}
    
    return 0;
}
