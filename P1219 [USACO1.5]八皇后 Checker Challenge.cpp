#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 50;
int n, cnt, ans[N];
bool  a[N], b[N], c[N];//×ÝÁÐ£¬x + y, y - x + n;
void dfs(int u)
{
    if(u >= n)
    {
        if(cnt < 3)
        {
            for (int i = 0; i < n; i ++ )
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        cnt ++;
        return;
    }
    
    for (int i = 1; i <= n; i ++ )
    {
        if(!a[i] && !b[u + i] && !c[n + i - u])
        {
            a[i] = b[u + i] = c[n + i - u] = true;
            ans[u] = i;
            dfs(u + 1);
            a[i] = b[u + i] = c[n + i - u] = false;
        }
    }
}


int main()
{
    cin >> n;
    dfs(0);
    cout << cnt <<endl;
    return 0;
}
