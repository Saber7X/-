#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N  = 1005;
int n, m;

signed main()
{
	cin >> n >> m;
	int maxn = -1;
	int sum[m + 10][n + 10] = {0};
	vector<int> ans;
	for (int i = 1; i <= m; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			cin >> sum[i][j];
		}
	}
	for (int i = 1; i <= n; i ++ )
	{
		int x = 0;
		for (int j = 1; j <= m; j ++ )
		{
			x += sum[j][i];
		}
		if (x > maxn)
		{
			maxn = x;
			ans.clear();
			ans.push_back(i);
		}
		else if (x == maxn)
		{
			maxn = x;
			ans.push_back(i);
		}
	}
	cout << maxn << endl;
	for (int i = 0; i < ans.size(); i ++ ) 
	{
		cout << ans[i] ;
		if ( i != ans.size() - 1) cout << " ";
		
	}
	return 0;
}
