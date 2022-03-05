#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int x;
	cin >> x;
	if (x < 0 && x % 10 != 0)
	{
		cout << x / 10 - 1 << endl;
	}
	else cout << x/ 10;
	return 0;
}
