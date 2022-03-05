#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 5;

int n, x, num[N], dp[N];

int maxSum()
{
	int ans = -2e9;
	for (int i = 1; i <= n; i++) {
		dp[i] = max(dp[i - 1], 0) + num[i];
		ans = max(ans, dp[i]);
	}
	return ans;
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		scanf("%d%d", &n, &x);
		for(int i = 1; i <= n; i ++ ) scanf("%d", &num[i]);
		memset(dp, 0, sizeof dp);
		int flag = maxSum();
		cout << flag << endl;
		if (x > flag) printf("1\n");
		else if (x == flag) printf("0\n");
		else
		{
			int ans = n;
			for (int i = 1; i <= n; i ++ ) 
			{
				if (num[i] <= 0) ans --;
			}
			if (x == 0) 
			{
				cout << ans << endl;
			}
			else if (x < 0)
			{
				cout << n - ans << endl;
			}
			else
			{
				int ff = 0;
				for(int i = 1; i <= n; i ++ )
				{
					if (num[i] > x || x > 0)
					{
						ff ++;
					}
				}
				cout << ff << endl;
			}
			
		}
		
	}
	return 0;
}
