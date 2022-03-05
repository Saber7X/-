#include<bits/stdc++.h> 
#define int long long
using namespace std;

signed main()
{
	int a, h, b, k;
	scanf("%lld%lld%lld%lld", &a, &h, &b, &k);
	
	int ans = a + b, cnt = 0;
	
	while(1)
	{
		cnt ++; 
		k -= a;
		h -= b;
		if(k <= 0 && h > 0)
		{
			printf("%lld", ans + a * 10 + (cnt - 1) * (a + b));
			break;
		}
		if(h <= 0 && k > 0)
		{
			printf("%lld", ans + b * 10 + (cnt - 1) * (a + b));
			break;
		}
		if(k <= 0 && h <= 0)
		{
			printf("%lld", ans + (cnt - 1) * (a + b));
			break;
		}
	}
	
	return 0;
}
