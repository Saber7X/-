//#include<bits/stdc++.h> 
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t -- )
//	{
//		int n, k;
//		cin >> n >> k;
//		int a[n + 10];
//		unordered_map<int, int> ma;
//		unordered_set<int> s;
//		for (int i = 1; i <= n; i ++ ) 
//		{
//			cin >> a[i];
//			s.insert(a[i]);
//			ma[a[i]] = min(k, ma[a[i]] + 1);
//		}
//		int ans[200005] = {0};
//		int sum = 0;
//		for (auto i : s)
//		{
//			sum += ma[i];
//		}
//		int cnt = sum / k;
//		
//		unordered_map<int, int> flag;
//		int c = 1;
//		for (int i = 1; i <= n; i ++ )
//		{
//			if (ma[a[i]] > 0)
//			{
//				ma[a[i]] --;
//				ans[i] = c;
//				flag[c] ++;
//				if (flag[c] > cnt) 
//				{
//					ans [i] = 0;
//					break;
//				}
//				c ++;
//				if (c > k) 
//				{
//					c = 1;
//				}
//			}
//		}
//		
//		for (int i = 1; i <= n; i ++ )
//		{
//			cout << ans[i]  << " ";
//		}
//		
//		cout << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector<int> g[N];
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		
		int n, k; cin >> n >> k;
		for (int i = 0; i <= n; i ++ ) g[i].clear();
		int a[n + 10];
		unordered_map<int, int> ma;
		unordered_set<int> s;
		
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
			s.insert(a[i]);
			ma[a[i]] = min(ma[a[i]] + 1, k);
			g[a[i]].push_back(i);
		}
		int sum = 0;
		for (auto i : s)
		{
			sum += ma[i];
		}
		int cnt = sum / k;
//		cout << s.size() << " ";
//		cout << sum << " " << cnt << endl;
		
		
//		for (auto i : s)
//		{
//			cout << i << ":  " << endl;
//			for (int j = 0; j < g[i].size(); j ++ )
//			{
//				cout << g[i][j] << "  ";
//			}
//			cout << endl;
//		}
		
		int res[N] = {0};
		int ans[N] = {0};
		
		int c = 1;
		bool f = 0;
		for (auto i : s)
		{
			int x = i;
			int v = g[x].size();
			for (int j = 0; j < min(k, v); j ++ )
			{
				int tt = g[x][j];
				ans[tt] = c;
				res[c] ++;
				if (res[c] > cnt)
				{
//					cout << " 超出的是这个数" <<c << endl;
					f = 1;
					ans[tt] = 0;
					break;
				}
				c ++;
				if (c > k) c = 1;
			}
			if (f) break;
		}
		for (int i = 1; i <= n; i ++ )
		{
			cout << ans[i] << " " ;
		}
		cout << endl;
	}
	return 0;
}
