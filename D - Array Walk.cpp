#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;

int a[N];

int main()
{
	int t;
	cin >> t;
	
	while (t -- )
	{
		int n, k, z, maxn = 0, sum = 0, ans = 0;
	
		scanf("%d%d%d", &n, &k, &z);
	
		for(int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);
		
		for(int i = 1; i <= k + 1; i ++ )
		{
			sum += a[i];
			maxn = max(maxn, a[i] + a[i + 1]);
			
			int flag;
			flag = min((k - i + 1) / 2, z);
			
			ans = max(ans, flag * maxn + sum);
		}
		printf("%d\n", ans);
	}
	return 0;
}
