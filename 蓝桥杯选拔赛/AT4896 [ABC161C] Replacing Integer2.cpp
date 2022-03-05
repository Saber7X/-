#include<stdio.h>
#include<math.h>
#include<algorithm>
#define int long long
using namespace std;
signed main()
{
	int n, k;
	scanf("%lld%lld", &n, &k);
	int ans = n % k;
	if (abs(ans - k) < ans) ans = abs(ans - k);
	printf("%lld\n", ans);
	return 0;
}
