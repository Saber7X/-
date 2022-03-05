#include<bits/stdc++.h> 
using namespace std;

const int N = 20 + 10;
int c[N];
int f[N];
bool t;
int sum;
int maxn = -999999;

int main()
{
	int n, m, w;
	cin >> n >> m >> w;
	for (int i = 1; i <= n; i ++ ) cin >> c[i];
	for (int i = 1; i <= m; i ++ )
	{
		int tt; cin >> tt;
		if (f[tt] == 0)
		{
			sum += c[tt];
			maxn = max(sum, maxn);
			f[tt] = 1;
		}
		else
		{
			f[tt] = 0;
			sum -= c[tt];
		}
	}
	if (maxn > w) cout << "Oh, My God!" << endl;
	else cout << maxn << endl;
	return 0;
}
