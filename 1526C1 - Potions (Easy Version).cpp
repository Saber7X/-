#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n, a[2005]={0}, f[2005][2005]={0}, cnt = 0;;
	cin >> n;
	memset(f, -1 , sizeof f);
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for(int i = 0; i <= n; i ++ )
	{
		f[i][0] = 0;
	}

	for(int i = 1; i <= n ;i++)
	{
		for(int j = 1; j <= i; j ++)
		{
			if(f[i - 1][j - 1] >= 0)
			{
				f[i][j] = max(f[i-1][j-1]+a[i],f[i][j]);
			}
			if(f[i - 1][j] >= 0)
			{
				f[i][j] = max(f[i][j], f[i - 1][j]);
			}
			
		}
	}
	for(int  i = n; i >= 0; i --)
	{
		if(f[n][i] >=0 )
		{
			cout << i;
			break;
		}
	}
	return 0;
}
