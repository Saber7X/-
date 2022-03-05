#include<bits/stdc++.h>
#define int long long
using namespace std;
int prime[100] = {0, 2, 11, 103, 1003, 10003, 100003, 1000003, 10000003, 100000003, 1000000003, 10000000003};
signed mian()
{
	int t; cin >> t;
	while (t -- )
	{
		int a, b, c;
		cin >> a >> b >> c;
		int x = 1;
		for (int i = 1; i < c; i ++ ) x *= 10;
		cout << x * prime[a - c + 1] << " " << x * prime[b - c + 1] << endl;
	}
	return 0;
}
