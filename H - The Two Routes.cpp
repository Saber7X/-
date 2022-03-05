#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 405, inf = 0x3f3f3f3f;

int n, m, k;
int d[N][N];
int dis[N][N];

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i ++ )
    {
        for(int j = 1; j <= n; j ++ )
        {
            if(i == j) d[i][j] = 0;
            else d[i][j] = inf;
        }
    }
    
    for(int i = 1; i <= n; i ++ )
    {
        for(int j = 1; j <= n; j ++ )
        {
            if(i == j) dis[i][j] = 0;
            else dis[i][j] = inf;
        }
    }
    
    while (m -- )
    {
    	int a, b;
        cin >> a >> b;
		d[a][b] = 1;
		d[b][a] = 1;
    }
    for (int i = 1; i <= n; i ++ ) 
    {
    	for (int j = 1; j <= n; j ++ )
    	{
    		if (d[i][j] == inf) 
    		{
    			dis[i][j] = 1;
    			dis[j][i] = 1;
			}
		}
	}
	
    for (int k = 1; k <= n; k ++ )
    {
        for (int i = 1; i <= n; i ++ )
        {
            for (int j = 1; j <= n; j ++ )
            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    for (int k = 1; k <= n; k ++ )
    {
        for (int i = 1; i <= n; i ++ )
        {
            for (int j = 1; j <= n; j ++ )
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
    
    int ans;
    if(d[1][n] > inf/2 || dis[1][n] > inf/2 ) 
	{
		cout << "-1" << endl;
		return 0;
	}
    ans = max(d[1][n], dis[1][n]);
    cout << ans << endl;
    return 0;
}
