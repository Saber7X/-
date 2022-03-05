#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 100005;

signed main()
{
	int T; cin >> T;
	while(T -- )
	{
		int sum = 0;
		int num[N], res[N], n;
		cin >> n;
		for(int i = 0; i < n; i ++ )
		{
			cin >> res[i];
		}
		sort(res, res + n);
		for(int i = n - 1; i >= 1; i -- )
		{
			res[i] = res[i] - res[i - 1];
		}
		int times = n - 1;
		int cnt = times;
		int ans = 0;
		for(int i = 1, j = n - 1; i < j; i ++, j -- )
		{
			ans -= (res[i] + res[j]) * (times - 1);
			cnt -= 2;
			times += cnt;
		}
		if(n%2 == 0)
		{
			ans -= res[n/2] * (times - 1);
		}
		cout << ans <<endl;
	}
	return 0;
}
