#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int 

int read()  
{  
    int s = 0, f = 1;  
    char ch = getchar();  
    while(!isdigit(ch)) {  
        if(ch == '-') f = -1;  
        ch = getchar();  
    }  
    while(isdigit(ch)) {  
        s = s * 10 + ch - '0';  
        ch = getchar();  
    }  
    return s * f;  
}

int dfs(int v, int fa, int c)
{
	int sum;
	if (c >= 1)
	{
		sum = 1;
	}
	else
	{
		sum = 0;
	}
	
	for (int i = 0; i < g[v].size(); i ++ )
	{
		int j  = g[v][i];
		if (j == fa) continue;
		sum += dfs(j, v, c + 1);
	}
	return sum;
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		vector<int> vv;
		int ff[N] = {0};
		int n;
		n = read();
//		scanf("%d", &n);
		for (int i = 0; i <= n; i ++ ) g[i].clear();
		for (int i = 1; i <= n - 1; i ++ )
		{
			int u, v;
			u = read(), v = read();
			
//			scanf("%d%d", &u, &v);
			g[u].push_back(v);
			g[v].push_back(u);
			ff[u] ++;
			ff[v] ++;
			if (ff[u] >= 3)
			{
				vv.push_back(u);
				ff[u] = -0x3f3f3f3f;
			}
			if (ff[v] >= 3)
			{
				vv.push_back(v);
				ff[v] = -0x3f3f3f3f;
			}
		}
		int ans = 0;
		for (int i : vv)
		{
			for (int j = 0; j < g[i].size(); j ++ )
			{
				int v = g[i][j];
				if (g[v].size() >= 2)
				{
					ans += dfs(v, i, 0);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
