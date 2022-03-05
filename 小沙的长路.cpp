#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin >> n;
	if (n == 2)
	{
		cout << "1 1";
	}
	else if (n <= 1) cout << "0 0" << endl;
	else if (n % 2 == 0)
	{
		cout << (n + 1) / 2 << " " << (n - 1) * n / 2 - 1;
	}
	else
	{
		cout << (n + 1) / 2 << " " << (n - 1) * n / 2;
	}
	return 0;
}
