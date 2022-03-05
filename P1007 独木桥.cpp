#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l, n; cin >> l >> n;
	
	int minn = 0, maxn = 0;
	
	for (int i = 1; i <= n; i ++ )
	{
		int x; cin >> x;
		minn = max(minn, min(x - 0, l + 1 - x));
		maxn = max(maxn, max(x - 0, l + 1 - x));
	}
	cout << minn << " " << maxn << endl;
	return 0;
}
