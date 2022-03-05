#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int g[N][10];
int n, x;

int xx[4] = {1, 1, 1};
int yy[4] = {-1, 1, 0};

int f = 0;

void dfs(int u, int sum)
{
    // cout << u << endl;
    if (sum > x) return;
    if (u > n)
    {
        if (sum == x)
        {
            cout << "Yes" << endl;
            f = 1;
            return;
        }
        return;
    }
    for (int i = 1; i <= 2; i ++ )
    {
        dfs(u + 1, sum + g[u][i]);
    }
}

int main()
{
	
	cin >> n >> x;
	for (int i = 1; i <= n; i ++ )
	{
	    cin >> g[i][1] >> g[i][2];
	}
	dfs(1, 0);
	if (!f)  cout << "No" << endl;
	return 0;
}
