#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int x;
		cin >> x;
		if (x >= m) cnt1 ++;
		else cnt2 ++;
	}
	if (cnt1 - cnt2 > -) cout << cnt1 - cnt2 << endl;
	else cout << -1 << endl;
	return 0;
}
