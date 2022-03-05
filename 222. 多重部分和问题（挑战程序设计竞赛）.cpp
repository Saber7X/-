#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int f[N];
int a[N], m[N];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= n; i ++ ) cin >> m[i];
	f[0] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		int cnt = 0;
		int num[k + 10] = {0};
		for(int j = a[i]; j <= k; j ++ )
		{
			if (!f[j] && f[j - a[i]] && num[j - a[i]] + 1 <= m[i])
			{
				f[j] = 1;
				num[j] = num[j - a[i]] + 1;
			}
		}
	}
//	for (int i = 0; i <= 17; i ++ ) cout << f[i] << " ";
	if (f[k]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
