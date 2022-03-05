#include<bits/stdc++.h>
#define int long long
using namespace std;
const int  N = 1e6 + 10;
int sum[N];
signed main()
{
	int t; cin >> t;
	for (int i = 1; i <= 1000008; i ++ )
	{
		sum[i] = sum[i - 1];
		if (i % 7 != 0 )
		{
			bool tt = false;
			int xx = i;
			while (xx > 0)
			{
				int cc = xx % 10;
				if (cc % 7 == 0 && cc != 0) tt = true;
				
				xx /= 10;
			}
			if (!tt)
			{
				int aa = i * i;
				sum[i] += aa;
			}
			
		} 
	}
	while (t -- )
	{
		int n; cin >> n;
		cout << sum[n] << endl;
	}
	return 0;
}
