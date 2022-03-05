#include<stdio.h>
#include<math.h>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#define int long long
using namespace std;
signed main()
{
	int n, k;
	scanf("%lld%lld", &n, &k);
	int ans = n % k;
	ans = min(ans, abs(ans - k));
	printf("%lld\n", ans);
	return 0;
}
