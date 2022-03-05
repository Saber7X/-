#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N =  2005;
int a[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; scanf("%lld", &n);
		int ans = 0;
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%lld", &a[i]);
			ans ^= a[i];
		}
		if (ans == 0) //如果最终偶数个相同，那么就直接等于0了 
		{
			cout << "YES" << endl;
			continue;
		}
		int ans1 = 0, cnt = 0;
		for (int i = 1; i <= n; i ++ )
		{
			ans1 = ans1 ^ a[i];
			if (ans1 == ans)
			{
				cnt ++;
				ans1 = 0;
			}
		}
		
		//这便是判奇数，奇数不能使所有的数异或和为0，那么最后剩下的那个数，就是这个数列最终相等的数，那就看看这些相等的数的个数是否大于2 
		if (ans1 == 0 && cnt >= 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
