#include<bits/stdc++.h>
#define int long long
using namespace std;
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
		int a, b;
		cin >> a >> b;
		cout << qmi(a, b, 1e9 + 7) << endl;
		
	}
	return 0;
}
