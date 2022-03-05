#include<bits/stdc++.h> 
#define int long long
using namespace std;
int num[100005],ans[100005];
signed main()
{
	int n; cin >> n;
	int maxn = 0;
	for(int  i = 1; i <= n; i ++ )
	{
		scanf("%lld", &num[i]);
		//cin >> num[i];
		maxn = max(maxn, num[i]);
	}
	sort(num + 1, num + n + 1);
	
	int q; cin>> q;
	
	ans[0] = 1;
	
	for(int i = 1; i <= q; i ++ )
	{
		int k; cin >> k;
		int xx = (ans[i - 1] * k) % (maxn + 1);
		int tmp = lower_bound(num + 1, num + n + 1, xx) - num;
		
		ans[i] = num[tmp];
		
		printf("%lld\n", num[tmp]);
	} 
	return 0;
}
