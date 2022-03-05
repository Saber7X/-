#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 2e5 + 10;

vector<int> g[N];
int s[N];
int id[N];
int ans[N];

bool cmp(int xxx, int yyy)
{
	return xxx > yyy;
}
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		
		int n; scanf("%lld", &n);
		for (int i = 1; i <= n; i ++ ) g[i].clear(), ans[i] = 0;
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &id[i]);
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &s[i]);
		for (int i = 1; i <= n; i ++ ) g[id[i]].push_back(s[i]);
		for (int i = 1; i <= n; i ++ )
		{
			//判断不为空 
			if (g[i].size() != 0)
			{ 
				sort(g[i].begin(), g[i].end(), cmp);//排序
				for (int j = 1; j < g[i].size(); j ++ ) //求前缀 
				{
					g[i][j] = g[i][j] + g[i][j - 1];
				}
			}
		}

		for (int i = 1; i <= n; i ++ )//求枚举每个大学 
		{
			if (g[i].size() != 0)//如果这个大学有人 
			{
				int len = g[i].size();
				for (int k = 1; k <= len; k ++ ) //枚举分组 
				{
					//           加上当前大学的有效人数 
					ans[k] += g[i][len / k * k - 1]; //该步骤可以实现去掉最后几个不足k人的人，-1是因为数组从0开始
				}
			}
			
		} 
		for (int i = 1; i <= n; i ++ ) 
		{
			printf("%lld ", ans[i]);
		}
		cout << endl;
	}
	return 0;
}
