//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//
//const int mod = 1e9 + 7;
//signed main()
//{
//	int n; cin >> n;
//	int f[100005];
//	f[1] = 16;
//	
//	for (int i = 2; i <= n + 1; i ++ )
//	{
//		f[i] =  (f[i - 1] * f[i - 1]) % mod * 16 % mod;
//	}f[0] = 1;
//	cout << f[n - 1] * 6 % mod<< endl;
//	
//	return 0;
//}



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

int qmi1(int m, int k)
{
    int res = 1, t = m;
    while (k)
    {
        if (k&1) res = res * t;
        t = t * t;
        k >>= 1;
    }
    return res;
}
signed main()
{
	int k; cin >> k;
	int f = qmi(2, k - 1, mod);
	cout << f << endl;
	int sum = qmi(4, f, mod);
	
	cout << sum * 6 % mod << endl;
	
	return 0;
}
