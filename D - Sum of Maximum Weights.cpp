#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int e[N], ne[N], h[N], w[N], idx;
void add(int a, int b, int c)  // 添加一条边a->b，边权为c
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

int ans = 0;
bool st[N];
vector <int> num[N];
void dfs(int u, int maxn)
{
    
    for (int i = h[u]; i != -1; i = ne[i] )
    {
        int j = e[i];
        if (!st[j])
        {
            int ff = max(maxn, w[i]);
            
            	ans += w[i];
            	ans += ff;
			
            
            dfs(j, ff);
        }
    }
}


int main()
{
	memset(h, -1, sizeof h);
    int n; cin >> n;
    for(int i = 1; i < n; i ++ )
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }
    dfs(1, 0);
    cout <<  ans << endl;
    return 0;
}
