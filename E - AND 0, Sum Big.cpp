#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
int qmi(int m, int k, int p)
{
    int res = 1 % p, t = m;
    while (k)
    {
        if (k&1) res = res * t % p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, k;
		scanf("%lld %lld", &n, &k);
		
		int ans = qmi(n, k, mod);
		printf("%lld\n", ans);
	}
	
	return 0;
}
