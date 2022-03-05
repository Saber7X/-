#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	
	int x;
	while (cin >> x)
	{
		int sum = 0;
		while (x > 0)
		{
			sum += x;
			x /= 10;
		}
		cout << sum << endl;
		cout << endl;
	}
	
	return 0;
}
