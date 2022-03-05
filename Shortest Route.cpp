#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100005;
signed main()
{
	int T; cin >> T;
	while(T -- )
	{
		int a[N], b[N], n, m;
		scanf("%lld%lld", &n, &m);
		//cin >> n >> m;
		for(int i = 0; i < n; i ++ )
		{
			scanf("%lld", &a[i]);
		}
		while(m -- )
		{
			
			int x;
			scanf("%lld", &x);
			x -= 1;
			if(a[x] != 0)
			{
				printf("0\n");
				//cout << "0" << endl;
				//continue;
			}
			else if(a[x] == 0)
			{
				bool ss = 0;
				int ans;
				for(int i = x + 1; i < n; i ++ )
				{
					if(a[i] == 2)
					{
						ss = 1;
						ans = i - x;
						break;
					}
				}
				for(int i = x - 1; i >= 0; i -- )
				{
					if(a[i] == 1)
					{
						ss = 1;
						ans = min(ans, x - i);
						break;
					}
				}
				if(ss == 0)
				{
					printf("-1\n");
					//cout << "-1" << endl;
				}
				else
				{
					printf("%lld\n", ans);
				}
			}
			
		}
	}
	return 0;
}
