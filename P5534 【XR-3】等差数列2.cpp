#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int a, b, n;
	cin >> a >> b >> n;
	int p = b - a;
	int sum = a + b;
	for (int i = 3; i <= n; i ++ )
	{
		b += p;
		sum += b;
	}
	cout << sum << endl;
	return 0;
}
