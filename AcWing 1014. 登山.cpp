#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	
		int n; cin >> n; int a[n + 5];
		
		int f[n]={0}, g[n + 5]={0};
		
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
		}
		for (int i = n; i; i -- )
		{
			g[i] = 1;
			for(int j = n ; j > i ; j -- )
			{
				if(a[i] > a[j])
				{
					g[i] = max(g[j] + 1, g[i]);
				}
			}
		}
		for(int i = 1; i <= n; i ++ )
		{
			res = max (res, f[i] + g[i] - 1);
		}
		cout << res << endl;

	return 0;
}
