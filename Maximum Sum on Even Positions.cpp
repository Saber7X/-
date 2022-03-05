//求每两个相邻的奇偶下标交换的贡献值 
///原数组偶数下标之和+奇偶下标交换带来的贡献 
//单求没两个的不影响结果，因为是一个区间，和0比可以处理负数情况，一旦为负数就归零 
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
int t, n;
signed main()
{
	cin >> t;
	while(t -- )
	{
		cin >> n;
		int ans = 0;
		for(int i = 0; i < n; i ++ )
		{
			cin >> a[i];
			if (i % 2 == 0) ans += a[i];//求所有偶数位的和 
		}
		int x = 0, y = 0, maxn = 0;
		for (int i = 0; i < n; i += 2 )
		{
			x = max((int)0, a[i - 1] - a[i] + x);//求贡献值累加
			maxn = max(maxn, x);
		}
		for(int i = 1; i <n; i += 2 )
		{
			y = max((int)0, a[i] - a[i - 1] + y);
			maxn = max(y, maxn);
		}
		cout << ans + maxn << endl;
	}
	return 0;
}
