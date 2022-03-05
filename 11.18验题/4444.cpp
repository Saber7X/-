#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 2e6 + 10, MAXN = 1e12 + 123;

int num[N];
int minn2[N];

signed main()
{
	int t; scanf("%lld", &t);
	while (t -- )
	{
		
		int n, a, b; 	
		scanf("%lld%lld%lld", &n, &a, &b);
		
		set<int>s;	s.clear();	 
		
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &num[i]);
		
		minn2[n] = num[n];
		
		for (int i = n - 1; i >= 1; i -- ) 
		{
			minn2[i] = min(minn2[i + 1], num[i]);
		}
		bool found = false;
		int ans = MAXN;
		s.insert(num[1]);
		
		for (int i = 2; i <= n - 1; i ++ )
		{
			s.insert(num[i]);
			if (num[i] <= minn2[i]) continue;
			
			auto x=s.lower_bound(num[i]);
			if (x == s.begin()) continue;
			x --;
			if (!found) found = true;
			ans = min(ans, a * (num[i] - *x) - b * (num[i] - minn2[i]));
		}
		if (!found)
		{
			printf("000\n");
		}
		else printf("%lld\n", ans);
//		puts("");
        
	}
	return 0;
}
