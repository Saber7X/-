#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int l = i, r = i;
		while (a[l] >= a[l - 1] && l > 1) l --;
		while (a[r + 1] <= a[r] && r < n) r ++;
		ans = max(ans, r - l + 1);
	}
	cout << ans << endl;
	return 0;
}
