#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int n;
int g[1008][6];

bool solve(int x, int y)
{
	int cnt1 = 0, cnt2 = 0, cnt = 0;
	for (int k = 1; k <= n; k ++ )
	{
		if (g[k][x] == 0 && g[k][y] == 0) return false;
		if (g[k][x] == 1 && g[k][y] == 0) cnt1 ++;
		if (g[k][x] == 0 && g[k][y] == 1) cnt2 ++;
		if (g[k][x] == 1 && g[k][y] == 1) cnt ++;
	}
	
	if (cnt1 < n / 2) cnt += cnt1 - n / 2;
	if (cnt2 < n / 2) cnt += cnt2 - n / 2;
	return cnt >= 0;
//	if (cnt >= 0) 
//	{
//		cout << "YES" << endl;
//		return;
//	}
//	else 
//	{
//		cout << "NO" << endl;
//		return;
//	}
			
//			if(cnt1 == n || cnt2 == n)
//			{
//				cout << "NO" << endl;
//				return;
//			}
//			else if (cnt == n) 
//			{
//				cout << "YES" << endl;
//				return;
//			}
//			else if (cnt1 + cnt2 == n && cnt1 == cnt2)
//			{
//				cout << "YES" << endl;
//				return;
//			}
//			else if (cnt1 + cnt2 < n && cnt1 + cnt2 + cnt == n)
//			{
//				cout << "YES" << endl;
//				return;
//			}
	//cout << "NO" << endl;
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n;
		if (n % 2 != 0)
		{
			cout << "No" << endl;
			continue;
		}
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= 5; j ++ ) cin >> g[i][j];
		}
		bool ans = false;
		for (int i = 1; i <= 5; i ++ )
		{
			for (int j = i + 1; j <= 5; j ++ )
			{
				if (solve(i, j)) ans = true;
			}
		}
		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
