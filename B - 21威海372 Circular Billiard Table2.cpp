#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		double a, b; cin >> a >> b;
//		if (a < b) swap(a, b);
		int ans = 180 / (a / b);
		if (180 * b == ans * a)  cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}
