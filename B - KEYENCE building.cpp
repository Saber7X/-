#include<bits/stdc++.h>
#define int long long
using namespace std;
map<int, int> f;

signed main()
{
	int n;
	cin >> n;
	int s[n + 5] ={ 0};
	for (int i = 1; i <= n; i ++ ) scanf("%lld", &s[i]);
	
	for (int i = 1; i <= 200; i ++ )
	{
		for (int j = 1; j <= 200; j ++ )
		{
			int flag = 4 * i * j + 3 * i + 3 * j;
			
			f[flag] = 1;
			
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (f[s[i]] == 1)
		{
			cnt ++;
		} 
	}
	cout << n - cnt;
	return 0;
}
