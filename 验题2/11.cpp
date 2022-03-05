#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n, l, r, x;
	cin >> n >> l >> r >> x;
	int a[n + 5];
	int cnt = 0;
	x = abs(x);
	while (x > 0)
	{
		int y = x % 10;
		a[cnt] = y;
		cnt ++;
		x /= 10;
	}
	int ans = 0;
	for (int i = 0; i < cnt; i ++ )//枚举每一个数位 
	{
		bool f = 0;
		
		if (a[i] == 0) continue;
		
		for (int j = l; j <= r; j ++ )
		{
			if (j == 0 ) continue;
			if (j % a[i] == 0) 
			{
				f = 1;
				break;
			}
		}
		if (f == 0) ans ++ ; 
		
	}
	cout << ans;
	
	return 0;
}
