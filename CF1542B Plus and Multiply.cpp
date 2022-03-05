#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
	int T;
	cin >> T;
	while (T--) 
	{
		int n, a, b;
		scanf("%lld%lld%lld", &n, &a, &b);
		bool flag = false;
		if (a == 1) 
		{
			if ((n - 1) % b == 0) 
			{
				printf("Yes\n");
			}
			else 
			{
				printf("No\n");
			}
		}
		else 
		{
			for (int i = 1; i <= n; i *= a) 
			{
				if ((n - i) % b == 0) 
				{
					flag = true;
					break;
				}
			}
			if (flag) 
			{
				printf("Yes\n");
			}
			else 
			{
				printf("No\n");
			}
		}
	}
	return 0;
}
