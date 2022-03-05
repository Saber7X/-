#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int h[N * 2], ne[N * 2], e[N * 2], idx;

int ans = 0x3f3f3f3f;
int n;
bool st[N];

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
    idx++;
}

int dfs(int u)
{
	st[u]  = true;
    int sum = 1, res = 0;
    for (int i = h[u]; i != -1; i = ne[i])
    {
        int j = e[i];
        if (!st[j])
        {
            int s = dfs(j);
            res = max (res, s);
            sum += s;
            st[j] = true;
        }
    }
    res = max(res, n - sum);
    ans = min(ans, res);
    return sum;
}

int main()
{
	memset(h, -1, sizeof h);
    cin >> n;
    for (int i = 1; i < n; i ++ )
    {
        int u, v; cin >> u >> v;
        add(u, v);
        add(v, u);
    }
    dfs(1);
    cout << ans << endl;
    return 0;
}
