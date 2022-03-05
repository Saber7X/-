#include<bits/stdc++.h>
using namespace std;
int st[10005][1005] = {0}; //记录时间地点班级 
int n, m, k;
bool res;
int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i ++ )
	{
		int l; scanf("%d", &l);
		unordered_map<int, int> flag;
		for (int j = 1; j <= l; j ++ )
		{
			int x; scanf("%d", &x);
			flag[x] = 1;
		}
		int t, r; scanf("%d%d", &t, &r);
		if (st[t][r] != 0)
		{
			if (res) printf("\n");
			printf("ERROR: Conflict between %d and %d.", i, st[t][r]);
			res = 1;
		}
		if (flag[t] == 1)
		{
			if (res) printf("\n");
			res = 1;
			printf("ERROR: Conflict with instructor for %d.", i);
		}
		if (st[t][r] == 0 && flag[t] == 0)
		{
			st[t][r] = i;
		}
	}
	if (!res) printf("Perfect Arrangement for %d classes!", n);
	return 0;
}
