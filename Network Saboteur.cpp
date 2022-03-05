#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
//#define int long long
using namespace std;
const int N = 25;
int n;
int g[N][N];
bool st[N];
int ans[N];
int aans = 0;

void dfs(int u, int v)
{
	if (u > n)
	{
		int sum = 0;
		
		for (int i = 0; i < v; i ++ )
		{
//			cout << ans[i] << " ";
			for (int j = 1; j <= n; j ++ )
			{
				if (!st[j])
				{
					sum += g[ans[i]][j];
				}
			}
		}
//		cout << endl;
		if (sum > aans) aans = sum;
		return;
	}
	
	
	//ฒปัก 
	dfs(u + 1, v);
	
	//ัก 
	st[u] = true;
	ans[v] = u;
	dfs(u + 1, v + 1);
	ans[v] = 0;
	st[u] = false;
}


signed main()
{
	scanf("%d", &n);
	aans = 0;
//	for (int i = 0; i <= n; i ++ )
//	{
//		for (int j = 0; j <= n; j ++ )
//		{
//			st[i] = 0;
//			g[i][j] = 0;
//			ans[j] = 0;
//		}
//	}
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= n; j ++ )
			{
				scanf("%d", &g[i][j]);
			}
		}
		dfs(1, 0);
		cout << aans << endl;	
	
	return 0;
}

