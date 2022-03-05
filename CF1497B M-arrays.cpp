#include<bits/stdc++.h>//////////////////////////////////
//00000#define int long long
using namespace std;////////////////////////////////////
const int N  = 1e5 + 10;
int flag[N] = {0};
signed main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		memset(flag, 0, sizeof(flag));
		int n, m; scanf("%d%d", &n, &m);
		
		int a;
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%d", &a);
			flag[a % m] ++;
		}
		
		int ans = 0;
		if (flag[0] != 0) ans ++;
		
		for (int i = 1; i <= m / 2; i ++ )
		{
			int a = max (flag[i], flag[m - i]);
			int b = min (flag[i], flag[m - i]);
			
			if (a == 0 && b == 0) continue;
			else if (a == b || a == b + 1) ans ++;
			else ans += 1+ (a - b-1);
		}
		printf("%d\n", ans); 
	}
	return 0;
}///////////





////////////////22222222222222222244444444444444444
