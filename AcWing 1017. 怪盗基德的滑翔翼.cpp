#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n; cin >> n; int a[n + 5];
		int f[n]={0};
		int res = 0;
		for(int i = 1; i <= n; i ++ ) cin >> a[i];
		for (int i = 1; i <= n; i ++ )
		{
			f[i] = 1;
			for(int j = 1; j < i ; j ++ )
			{
				if(a[i] > a[j])
				{
					f[i] = max(f[j] + 1, f[i]);
				}
			}
			res = max(res, f[i]);
		}
		
		memset(f, 0, sizeof f);
		for (int i = n; i >= 1; i -- )
		{
			f[i] = 1;
			for(int j = n ; j > i ; j -- )
			{
				if(a[i] > a[j])
				{
					f[i] = max(f[j] + 1, f[i]);
				}
			}
			res = max(res, f[i]);
		}
		
		cout << res << endl;
		
	}
	return 0;
}
