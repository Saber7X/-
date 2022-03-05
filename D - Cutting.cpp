#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 2500;
int n, m;
int num[N];

int ji[N][N], ou[N][N];

int maxn = 0;

void dfs(int l, int r, int ans, int sum)
{
	
	if (sum > m) return;
	if (sum == m) 
	{
		cout << l << " " << r << endl;
		maxn = max(maxn, ans);
		return;
	}
	if (sum < m) 
	{
		cout << l << " " << r << endl;
		maxn = max(maxn, ans);
	}
	
	for (int i = r; i < n; i ++ )
	{
		if (ji[r][i] == ou[r][i] && ji[i + 1][n] == ou[i + 1][n])
		{
			dfs(i, i + 1, ans + 1, sum + abs(num[i] - num[r]));
		}
	}
}

signed main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> num[i];
	}
//	if (n % 2 != 0) 
//	{
//		cout << 0;
//		return 0;
//	}
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i; j <= n; j ++ )
		{
			int a = 0, b = 0;
			for (int k = i; k <= j; k ++ )
			{
				if (num[k] % 2 == 0) a ++;
				else b ++;
			}
			ji[i][j] = b;
			ou[i][j] = a;
		}
	}
	
	dfs(1, 1, 0, 0);
	cout << maxn << endl;
	return 0;
}

/*
10 100
4 1 2 3 4 5 4 4 5 5
*/
