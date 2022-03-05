#include<bits/stdc++.h>
using namespace std;
const int N = 1005;

int n, m, ans = 0;
char g[N][N];
bool st[N][N];

int xx[4] = {0, 1, 0, -1};
int yy[4] = {1, 0, -1, 0};

void dfs(int x, int y)
{
    if(g[x][y] == '0')
    {
        st[x][y] = true;
        //cout << x <<" " << y <<endl;
        ans ++;
	}
	for (int i = 0; i < 4; i ++ )
    {
        int dx = x + xx[i];
        int dy = y + yy[i];
        if(g[dx][dy] == '1')
        {
            continue;
        }
        if(g[dx][dy] != '1' && !st[dx][dy] && dx>=1 && dx <= n&& dy>=1 && dy <=m)
        {
        	
            st[dx][dy] = true;
            dfs(dx, dy);
        }
    }
    return;
}

int main()
{
	
	cin >> m >> n;
	for(int i = 1; i <= m; i ++ )
	{
		for(int j = 1; j <= n; j ++ )
		{
			cin >> g[j][i];
            //cout << g[j][i];
		}
        //cout << endl;
	}
	for(int i = 1; i <= m; i ++ )
	{
		if(i == 1 || i == m)
		{
			for(int j = 1; j <= n; j ++ )
			{
				if(g[j][i] != '1' && !st[j][i])
				{
					dfs(j, i);
				}
			}
		}
		else
		{
			if(g[1][i] != '1' && !st[1][i])
            {
                dfs(1, i);
            }
            if(g[n][i] != '1' && !st[n][i])
            {
                dfs(n, i);
            }
		}
		
	}
	cout << ans;
	return 0;
}
