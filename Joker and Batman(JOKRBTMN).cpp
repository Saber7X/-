#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin >> T;
	while(T -- )
	{
		unordered_map <int, int> res;
		int n, m, l;
		scanf("%d%d%d", &n, &m, &l);
		//cin >> n >> m >> l;
		for(int i = 1; i <= m; i ++ )
		{
			int x; scanf("%d", &x);
			for(int j = 1; j <= x; j ++ )
			{
				int y; scanf("%d", &y);
				res[y] = i;
			}
		}
		int ll[100005]= {0};
		for(int i = 1; i <= l; i ++ )
		{
			scanf("%d", &ll[i]);
		}
		int ans = 0;
		for(int i = 1; i <= l; i ++ )
		{
			if(res[ ll[i] ] != res[ll[i + 1]])
			{
				ans ++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
