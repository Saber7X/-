#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin >> n;
	cout << n - 1 << " ";
	if (n % 2 == 0) cout << (1 + n - 1) * (n - 1) / 2 - (n / 2 - 1);
	else cout << (1 + n - 1) * (n - 1) / 2;
	return 0;
}
