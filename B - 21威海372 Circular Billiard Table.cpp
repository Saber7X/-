#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		double a, b; cin >> a >> b;
//		if (a < b) swap(a, b);
		int ans = 180 / (a / b) - 1;
		if ((int)(180 / (a/b) * 100000000.0) % 100000000 != 0) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
