#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

int n, m;
vector<int> g[N];
queue<int> q;
int d[N];
vector<int> ans;
bool st[N];
// int ans = 0;
bool topsort()
{
    for (int i = 1; i <= n; i ++ )
    {
        if (d[i] == 0)
        {
            
            ans.push_back(i);
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int tt = q.front();
        q.pop();
        for (int i = 0; i < g[tt].size(); i ++ )
        {
            int j = g[tt][i];
            d[j] --;
            if(d[j] == 0)
            {
                ans.push_back(j);
                q.push(j);
            }
        }
    }
    if (ans.size() == n) return false;
    else return true;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i ++ )
    {
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        d[b] ++;
    }
    if(!topsort()) for (int i = 0; i < ans.size(); i ++ ) cout << ans[i] << " ";
    else cout << -1 << endl;
    
    return 0;
}
