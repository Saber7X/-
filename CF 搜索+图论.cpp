#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100005;
signed main()
{
	int T; cin >> T;
	
	while(T -- )
	{
		int n, num[N]; cin >> n;
		
		for(int i = 0; i < n; i ++ )
		{
			cin >> num[i];
		}
		
		sort(num, num + n);
		
		for(int i = n - 1; i > 0; i -- )
		{
			num[i] = num[i] - num[i - 1];
		}
		int times = n - 1;//点数-1是边数
		int cnt = times;
		int ans = 0;
		
		for(int i = 1, j = n - 1; i < j; i ++, j -- )
		{
			ans -= (num[i] + num[j]) * (times - 1);
			cnt -= 2;
			times += cnt;
		} 
		if(n%2 == 0)
		{
			ans -= (num[n/2]) * (times - 1);
		}
		cout << ans << endl;
	}
	return 0;
}
