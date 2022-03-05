#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

vector<int> g[N], ans[N], X(N);

int n, q;

void dfs(int u, int fa)
{
    vector<int> order;
    order.push_back(X[u]);//放进它本身
    for (int i = 0; i < (int)g[u].size(); i ++ )
    {
        int j = g[u][i];
        if (j == fa) continue;
        dfs(j, u);
        for (int k = 0; k < (int)ans[j].size(); k ++ )
        {
            int v = ans[j][k];
            order.push_back(v); //存的是值 
        }
    }
    sort(order.begin(), order.end(), greater<int>());
    int num = min(20, (int)order.size());
    for (int i = 0; i < num; i ++ )
    {
        ans[u].push_back(order[i]); //order里面是值 
    }
    return;
}

int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> X[i];
    }
    for (int i = 1; i < n; i ++ )
    {
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1, -1);
//    for (int i = 1; i <= n; i ++ )
//    {
//    	for (auto j : ans[i]) cout << j << " ";
//    	cout << endl;
//	}
    while (q -- )
    {
        int a, b;
        cin >> a >> b;
        cout << ans[a][b - 1] << endl;
    }
    return 0;
}
