#include<bits/stdc++.h> 
#define int long long
const int N = 2e5 + 10;
using namespace std;
int a[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int sum = 0;
		map<int, int> num;
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%lld", &a[i]);
			num[a[i]] ++;
			sum += a[i];
		}
		
		if (sum * 2 % n != 0) 
		{
			cout << "0" << endl;
			continue;
		}
		
		int k = sum * 2 / n;
		
		int ans = 0;
		
		for (int i = 1; i <= n; i ++ )
		{
			int x = a[i], y = k - x;
			
			if (num[x] == 0) continue;
			
			if (x == y)
			{
				ans += (num[x] * (num[x] - 1) / 2);
				num[x] = 0; 
			}
			else 
			{
				ans += (num[x] * num[y]);
				num[x] = 0;
				num[y] = 0;
			}
			if (num[x] != 0) num[x] = 0;
		}
		cout << ans << endl;
	}
	return 0;
}
