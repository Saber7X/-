#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int hou[N], qian[N];
int main()
{
	memset(hou, -1, sizeof -1);
	memset(qian, -1, sizeof -1);
	int n, q; cin >> n >> q;
	while (q -- )
	{
		int qq, x, y; scanf("%d", &qq);
		if (qq == 1)
		{
			scanf("%d%d", &x, &y);
			hou[x] = y;
			qian[y] = x;
		}
		else if (qq == 2)
		{
			scanf("%d%d", &x, &y);
			hou[x] = -1;
			qian[y] = -1;
		}
		else if (qq == 3)
		{
			scanf("%d", &x);
			int ans[N];
			int pos = x, cnt = 0;
			while (pos != -1)
			{
				pos = qian[pos];
				if (pos != -1 && pos != 0)
				{
					ans[cnt] = pos;
					cnt ++;
				}
			}
			for (int i = (cnt - 1) / 2; i >= 0; i -- ) swap(ans[i], ans[cnt - 1 - i]);
			ans[cnt ++] = x;
			pos = x;
			while (pos != -1 )
			{
				pos = hou[pos];
				if (pos != -1 && pos != 0)
				{
					ans[cnt] = pos;
					cnt ++;
				}
			}
			printf("%d ", cnt);
			for (int i = 0; i < cnt; i ++ ) printf("%d ", ans[i]);
			printf("\n");
		}
	}
	return 0;
}
