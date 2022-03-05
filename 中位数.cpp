#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 1;

int a[N];

signed main()
{
	int t;
	cin >> t;
	
	while (t -- )
	{
		int sum = 0;
		int n, k; scanf("%lld%lld", &n, &k);
		
		for(int i = 1; i <= n; i ++ ) scanf("%d", &a[i]), sum += a[i];
		
		sort(a + 1, a + n + 1);
		
		if(k == n - 1) 
		{
			cout << sum << endl;
			continue;
		}
		
		int flag = (n - k + 1) / 2;
		printf("%d\n", a[flag]);		
	}
	return 0;
}
