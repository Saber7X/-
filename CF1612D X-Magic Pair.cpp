#include<bits/stdc++.h>
#define int long long
using namespace std;

bool f(int a, int b, int x)
{
	if (b == 0)
	{
		if (a == x) return true;
		else return false;
	}
	if ((a % b) == (x % b) && a >= x) return true;
	
	return f(b, a % b, x);
}

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int a, b, x;
		cin >> a >> b >> x;
		if (a < b)
		{
			swap(a, b);
		}
		if (f(a, b, x)) 
		{
			cout << "YES" <<endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
