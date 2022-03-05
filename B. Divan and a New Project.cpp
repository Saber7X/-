#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
struct name{
	int cnt;//访问次数
	int flag;//编号
	int ans; //距离答案 
}num[N];
bool cmp(name a, name b)
{
	return a.cnt > b.cnt;
}
bool cmp1(name a, name b)
{
	return a.flag < b.flag;
}
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%lld", &num[i].cnt);
			num[i].flag = i;
		}
		sort(num + 1, num + 1 + n, cmp);
		int res = 1;
		for (int i = 1; i <= n; i ++ )
		{
			num[i].ans = res;
			res *= -1;
			if (i % 2 == 0) res ++; 
		}
		sort(num + 1, num + 1 + n, cmp1);
		int sum = 0;
		for (int i = 1; i <= n; i ++ ) 
		{
			sum += (2 * abs(num[i].ans) * num[i].cnt);
		}
		printf("%lld\n0 ", sum);
		for (int i = 1; i <= n; i ++ ) printf("%lld ", num[i].ans);
		cout << endl;
	}
	return 0;
}
