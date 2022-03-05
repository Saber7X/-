#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int a[N];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i + 1; j <= n; j ++ )
		{
			if (a[i] > a[j])
			{
				ans ++;
				swap(a[i], a[j]);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
