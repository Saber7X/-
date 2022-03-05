#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int mod = 998244353;
signed main()
{
	int n;
	cin >> n;
	int flag = 1;
	int sum = 0;
	for (int i = 1; i <= 18; i ++ )
	{
//		flag *= 10;
		if (flag > n) break;
		
		int a = min(flag * 10 - 1, n);
//		cout <<":::  " << flag << " " << a << endl;
		int  x = (2 + a - flag) % mod;
		int y = (a - flag + 1) % mod;
		int z = x * y / 2 % mod;
		sum += z;

		sum %= mod;
		flag *= 10;
	}
	cout << sum << endl;
	return 0;
}
