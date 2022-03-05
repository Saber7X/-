#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e6 + 10, mod = 998244353;
int f[N], v[N];

signed main()
{
	int n; cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = i; j <= n; j += i )
		{
			v[j] ++ ;
		}
	}
	
	f[1] = 1;
	int sum = 1;
	
	for(int i = 2; i <= n; i ++ )
	{
		f[i] = (f[i] + sum) % mod;
		f[i] = (f[i] + v[i]) % mod;
		sum = (sum + f[i] ) % mod;
	}
	
	cout << f[n] << endl;
	return 0;
}
