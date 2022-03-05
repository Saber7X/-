#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 4015;
signed main()
{
	int V, num[N], f[N], cnt[N] = {0};
	cin >> V;
	for(int i = 1; i <= 3; i ++ )
	{
		cin >> num[i];
	}
//	for(int i = 1; i <= 3; i ++ )
//	{
//		for(int j = 0; j <= V; j ++ )
//		{
//			f[i][j] = f[i - 1][j];
//			cnt[i][j] = cnt[i - 1][j];
//			if(j >= num[i])
//			{
//				if(f[i][j - num[i]] + num[i] >= f[i - 1][j])
//				{
//					f[i][j] = f[i][j - num[i]] + num[i];
//					cnt[i][j] = cnt[i][j - num[i]] + 1;
//				}
//			}
//		}
//	}
//	int ans = -999;
//	for(int i = 1; i <= 3; i++ )
//	{
//		ans = max(cnt[i][V], ans);
//	}
//	cout << ans <<endl;
	memset(f, -1, sizeof f);
	f[0] = 0;
	for(int i = 1; i <= 3; i ++ )
	{
		for(int j = num[i]; j <= V; j ++ )
		{
			if(f[j - num[i]] != -1)//如果该方案存在 
			{
				f[j] = max(f[j], f[j - num[i]] + 1);
			} 
		}
	}
	cout << f[V] << endl;
	return 0;
}

