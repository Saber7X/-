#include<stdio.h>
#include<math.h>
#define int long long
signed main()
{
	int t; scanf("%lld", &t);
	int n;
	while (t -- )
	{
		scanf("%lld", &n);
		int a = n / 3; //3的倍数
		int b = n / 5; //5的倍数
		int c = n / 15;
		int x = a + b - c;
		int y = n - x;
		printf("%lld\n", abs(x - y));
	}
	return 0;
}
