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
			//�жϲ�Ϊ�� 
			if (g[i].size() != 0)
			{ 
				sort(g[i].begin(), g[i].end(), cmp);//����
				for (int j = 1; j < g[i].size(); j ++ ) //��ǰ׺ 
				{
					g[i][j] = g[i][j] + g[i][j - 1];
				}
			}
		}

		for (int i = 1; i <= n; i ++ )//��ö��ÿ����ѧ 
		{
			if (g[i].size() != 0)//��������ѧ���� 
			{
				int len = g[i].size();
				for (int k = 1; k <= len; k ++ ) //ö�ٷ��� 
				{
					//           ���ϵ�ǰ��ѧ����Ч���� 
					ans[k] += g[i][len / k * k - 1]; //�ò������ʵ��ȥ����󼸸�����k�˵��ˣ�-1����Ϊ�����0��ʼ
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
