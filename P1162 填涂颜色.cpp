#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 105;
char g[N][N];
bool st[N][N];
int xx[4] = {0, 1, 0, -1}, n, cnt;
int yy[4] = {1, 0, -1, 0};
void dfs(int x, int y)
{
    for (int i = 0; i < 4; i ++ )
    {
        int dx = x + xx[i];
        int dy = y + yy[i];
        if(g[dx][dy] == '1')
        {
            continue;
        }
        if(g[dx][dy] != '1' && !st[dx][dy] && dx>=1 && dx <= n&& dy>=1 && dy <=n)
        {
            st[dx][dy] = true;
            dfs(dx, dy);
        }
    }
    return;
}

int main()
{
    int t=0;
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
        {
            cin >> g[i][j];
            
        }
    }
    for (int i = 1; i <= n; i ++ )
    {
        if(i == 1 || i == n)
        {
            for(int j = 1; j <= n; j ++ )
            {
                if(g[i][j] != '1' && !st[i][j])
                {
                    dfs(i, j);
                }
            }
        }
        else
        {
            if(g[i][1] != '1' && !st[i][1])
            {
                dfs(i, 1);
            }
            if(g[i][n] != '1' && !st[i][n])
            {
                dfs(i, n);
            }
        }
        
    }
    
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
        {
            if(st[i][j] || g[i][j] == 1)
            {
                continue;
            }
            else if(g[i][j] == '*' && !st[i][j])
            {
            	cnt ++;
            }
        }
    }
    cout << cnt;
    return 0;
}

