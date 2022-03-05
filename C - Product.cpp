#include <iostream>
#include <cstring>
#include <algorithm>
#define int long long 
using namespace std;
const int N = 20;
int n, x;
vector<int> g[N];
int ans = 0;
void dfs(int sum, int u)
{
    if (sum == x && u > n)
    {
        ans ++;
        return;
    }
    if (u > n) return;
    if (sum > x)
    {
        return;
    }
    for (int i = 0; i < g[u].size(); i ++ )
    {
        dfs(sum * g[u][i], u + 1);
    }
}
signed main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i ++ )
    {
        int l;
        cin >> l;
        for (int j = 1; j <= l; j ++ )
        {
            int cc;
            cin >> cc;
            g[i].push_back(cc);
        }
    }
    dfs(1, 1);
    cout << ans << endl;
    return 0;
}
/*
3 1000000000000000000
2 1000000000 1000000000
2 1000000000 1000000000
2 1000000000 1000000000
*/
