#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int n, x, f[1005][1005] = {0};
	cin >> n >>x;
	for(int i = 1; i <= n; i ++)
	{
		int a, b, c;
		cin >> a>> b>>c;
		for(int j = x; j >= 0; j --)
		{
			if(j >= c)
			{
				f[i][j] = max(f[i-1][j - c] + b, f[i - 1][j] + a);
			}
			else
			{
				f[i][j] = max(f[i - 1][j] + a, f[i - 1][j]);
			}
		}
	}
	cout<<f[n][x]*5;
	return 0;
}
