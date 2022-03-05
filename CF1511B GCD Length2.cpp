#include<bits/stdc++.h>
#define int long long
using namespace std;
int prime[100] = {0, 2, 11, 103, 1009, 10009, 999983, 1000003, 39999931, 100000007, 1000000009};
int prime2[100] = {0, 3, 13, 107, 1013, 10007, 999979, 1000033, 39999943, 100000037, 1000000007};

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int a, b, c;
		cin >> a >> b >> c;
		int x = 1;
		for (int i = 1; i < c; i ++ ) x *= 10;
		cout << x * prime[a - c + 1] << " " << x * prime2[b - c + 1] << endl;
	}
	return 0;
}
