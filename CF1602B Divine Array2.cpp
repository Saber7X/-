//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		int flag[5000];
//		int n; cin >> n;
//		int num[n + 4];//记录原数组 
//		map<int, int> cnt;//记录每个数出现的个数 
//		for (int i = 1; i <= n; i ++ )
//		{
//			cin >> num[i];
//			cnt[num[i]] ++;
//		}
//		int s[500][500]; //记录每一位的循环节 
//		int v;//当前数 
//		for (int i = 1; i <= n; i ++ )
//		{
//			v = num[i];
//			int f[100005]={0};
//			int c = 0;
//			while (1) 
//			{
//				if (f[v] != 0) //出现过
//				{
//					if (v != num[i]) 
//					{
//						cnt[v] --;
//						cnt[num[i]] ++;
//					}
//					break;
//				}
//				cnt[v] --;
//				s[i][c++] = v;
//				f[v] = 1;
//				v = cnt[v] + 1;
//				cnt[v] ++;
//			}
//			flag[i] = c;
//		}
//		int q; cin >> q;
//		while (q -- )
//		{
//			int x, k; cin >> x >> k;
//			cout << s[x][sizeof(flag[x]) % k] << endl;
//		}
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int ans[2005][2005] = {0};
int num[2005];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; scanf("%d", &n);
		map<int, int> cnt;
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%d", &num[i]);
			cnt[num[i]] ++;
			ans[i][0] = num[i];
		}
		for (int i = 1; i <= n; i ++ )//枚举操作次数 
		{
			for (int j  = 1; j <= n; j ++ )//枚举第几个数 
			{
				ans[j][i] = cnt[ans[j][i - 1]];
			}
			cnt.clear();
			for (int j = 1; j <= n; j ++ )
			{
				cnt[ans[j][i]] ++;
			}
		}
		int q; cin >> q;
		while (q -- ) 
		{
			int x, k; scanf("%d%d", &x, &k);
			if (k > n) k = n;
			cout<<ans[x][k] << endl;
		}
	}
	return 0;
}
