#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int a, b; cin >> a >> b;
	bool f=0;
	while (a >0 && b > 0)
	{
		int x = a % 10;
		int y = b % 10;
		if (x + y >= 10) f = 1;
		a /= 10;
		b /= 10;
	}
	if (f) cout << "Hard" << endl;
	else cout << "Easy" << endl;
	return 0;
}
