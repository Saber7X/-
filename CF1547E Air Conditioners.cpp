#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin >> T;
	while(T -- )
	{
		int n, k; cin >> n >> k;
		int a[n + 5], t[n + 5], f[n + n];
		memset(f, 0x3f3f3f3f, sizeof f);
		for(int i = 1; i <= k; i ++ )
		{
			cin >> a[i];
		}
		for(int i = 1; i <= k; i ++ )
		{
			cin >> t[i];
		}
		for(int i = 1; i <= k; i ++ )
		{
			f[ a[i] ] = t[i];
		}
		for(int i = 1; i <= n; i ++ )
		{
			f[i] = min(f[i], f[i - 1] + 1);
		}
		for(int i = n; i >= 1; i -- )
		{
			f[i] = min(f[i], f[i + 1] + 1);
		}
		for(int i = 1; i <= n; i ++ )
		{
			cout << f[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}
