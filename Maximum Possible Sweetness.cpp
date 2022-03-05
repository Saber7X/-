#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100005;
signed main()
{
	int T; scanf("%d", &T);
	while(T -- )
	{
		map <int, int > res;
		int f[N][3] = {0};
		int n, d, v[N], w[N];
		scanf("%d%d", &n, &d);
		//cin >> n >> d;
		for(int i = 1; i <= n; i ++ )
		{
			scanf("%d", &v[i]);
		}
		for(int i = 1; i <= n; i ++ )
		{
			scanf("%d", &w[i]);
			res[v[i]] = w[i];
		}
		for(int i = 1; i <= n; i ++)
		{
			for(int j = d; j >= v[i]; j --)//体积 
			{
				for(int k = 2; k >= 1; k --)//重量 
				{
					f[j][k] = max(f[j][k], f[j- v[i]][k - 1] + w[i]);
				}
			}
		}
		printf("%d\n", f[d][2]);
		//cout << f[d][2] << endl;
	}
	return 0;
}
