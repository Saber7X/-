
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
//		memset(minn2, 0, sizeof minn2);
//		memset(num, 0, sizeof num);
		int n, a, b; 
//		n = read();
//		a = read();
//		b = read();		
		scanf("%lld%lld%lld", &n, &a, &b);
		set<int>s;		 
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &num[i]);
		
		minn2[n + 1] = MAXN;
		
		for (int i = n ; i >= 1; i -- ) 
		{
			minn2[i] = min(minn2[i + 1], num[i]);
		}
		
		int ans = MAXN;
		
		for (int i = 2; i <= n - 1; i ++ )
		{
			s.insert(num[i - 1]);
			int k=num[i];
			auto x=s.lower_bound(k);
			if (x == s.begin()) continue;
			x --;
			if(*x<num[i])
			{
				//cout<<i<<" "<<*x<<endl;;
				int y = minn2[i + 1];
				if (*x < num[i] && num[i] > y)
				{
					ans = min(ans, a * (num[i] - *x) - b * (num[i] - y));
				}
			}
		}
		if (ans >= MAXN)
		{
			printf("000\n");
		}
		else printf("%lld\n", ans);
//		puts("");
        s.clear();
	}
	return 0;
}
