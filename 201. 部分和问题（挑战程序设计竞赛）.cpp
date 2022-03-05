#include<bits/stdc++.h>
//#define 
using namespace std;
const int N = 25;
int n, k;
int a[N];
bool f = 0;
int ans[N];

void dfs(int u, int v)
{
	if (u > n)
	{
		int sum = 0;
		for (int i = 0; i < v; i ++ ) 
		{
			sum += ans[i];
		}
		if (sum == k) f = 1;
		return;
	}
	dfs(u + 1, v);
	
	ans[v] = a[u];
	dfs(u + 1, v + 1);
}

int main()
{
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%d", &a[i]);
		}
		cin >> k;
		f = 0;
		dfs(1, 0);
		if (f == 1)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
