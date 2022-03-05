#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 5;

int n, m;
bool st[N];
int e[N], h[N], ne[N], idx;
int q[N];
int ss[N];

void add(int a, int b)  // Ìí¼ÓÒ»Ìõ±ßa->b
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}

int dfs(int u)
{
    int minn = u;
    
    for(int i = h[u]; i != -1; i = ne[i])
    {
    	if(!st[e[i]])
    	{
    		if(e[i] < minn)
    		{
    			minn = e[i];
			}
    		st[e[i]] = true;
    		dfs(e[i]);
		}
    	
	}
    
	return minn;
}


int main()
{
	
	int n, m;
	scanf("%d%d", &n, &m);
	memset(h, -1, sizeof h);
	
	for(int i = 1; i <= m; i ++ )
	{
	    int a, b;
	    scanf("%d%d", &a, &b);
	    add(a, b);
	}
	int cnt = 0;
	int ans[N];
	for(int i = 1; i <= n; i ++ )
	{
		memset(st, 0, n + 5);
	    ans[cnt++] = dfs(i);
	}
	
	
	for(int i = 0; i < cnt; i ++ )
	{
		if(!ss[ans[i]])
		{
			printf("%d ", ans[i]);
	    	ss[ans[i]] = 1;
		}
	}
	return 0;
}
