//////#include<bits/stdc++.h>
//////using namespace std;
//////const int N = 55;
////////int a[N];
//////int main()
//////{
//////	int t; cin >> t;
//////	while (t -- )
//////	{
//////		int n;
//////		scanf("%d", &n);
//////		map<int, int> st;
//////		vector<int> a;
//////		bool res = 0;
//////		
//////		for (int i = 1; i <= n; i ++ ) 
//////		{
//////			int x;
//////			scanf("%d", &x);
//////			if (x > n)
//////			{
//////				a.push_back(x);
//////			}
//////			
//////			if (x <= n && st[x] == 1) 
//////			{
//////				res = 1;
//////			}
//////			
//////			if (x <= n)
//////			{
//////				st[x] = 1;
//////			}
//////		}
//////		if (res)
//////		{
//////			cout << "NO" << endl;
//////			continue;
//////		}
//////		sort(a.begin(), a.end());
//////		for (int i = 1; i <= n; i ++ )
//////		{
//////			if (!st[i])
//////			{
//////				int x = a[0];
//////				while (1)
//////				{
//////					if (x == i)
//////					{
//////						a.erase(a.begin());
//////						break;
//////					}
//////					if (x == 0)
//////					{
//////						res = 1;
//////						break;
//////					}
//////					x /= 2;
//////				}
//////			}
//////			if (res) break;
//////		}
//////		if (res) cout << "NO" << endl;
//////		else cout << "YES" << endl;
//////	}
//////	return 0;
//////}
////#include<bits/stdc++.h>
////using namespace std;
////bool cmp(pair<int, int> a, pair<int, int> b)
////{
////	return a.second < b.second;
////}
////int main()
////{
////	int T;
////	cin >> T;
////	while (T -- )
////	{
////		int n;
////		cin >> n;
////		vector<int> a[55];
////		map<int, int> f;
////		map<int, int> num;
////		pair<int, int> p[n + 10];
////		int cnt = 0;
////		for (int i = 1; i <= n; i ++ )
////		{
////			int x;
////			cin >> x;
////			int xx = x;
////			num[x] ++;
////			while (x > 0)
////			{
////				f[xx] ++;
////				a[x].push_back(xx);
//////				cout << x << " ";
////				x /= 2;
////			}
//////			cout << endl;
////		}
////		
////		map<int, int> stt;
////		for (int i = 1; i <= n; i ++ )
////		{
////			p[i] = {i, f[i]};
////		}
////		sort(p + 1, p + 1 + n, cmp);
////		
////		bool ans = 0;
////		
//////		for (int i = 1; i <= n; i ++ ) cout << p[i].first << " " << p[i].second << endl;
////		
//////		for (int i = 1; i <= n; i ++ )
//////		{
//////			cout << i << " ::  ";
//////			for (int j = 0; j < a[i].size(); j ++ )
//////			{
//////				cout << a[i][j] << " ";
//////			}
//////			cout << endl;
//////		}
////		
////		for (int i = 1; i <= n; i ++ )
////		{
////			auto t = p[i];
////			
//////			if (f[t.first] == 0) //没有数可以凑成 
//////			{
//////				ans = 1;
//////				break;
//////			}
////			bool ff = 0; //看有没有数可以用
////			
////			//尽量从小往大选 
//////			sort(a[t.first].begin(), a[t.first].end());
////			for (int j = 0; j < a[t.first].size(); j ++ )
////			{
////				//如果剩余个数大于0 
////				if (num[a[t.first][j]] > 0)
////				{
//////					cout <<  a[t.first][j] << endl;
////					num[a[t.first][j]] -- ;
////					ff = 1;
////					break;
////				}
////			}
////			if (!ff)
////			{
////				ans = 1;
////				break;
////			}
////		}
//////		for (int i = 1; i <= n; i ++ )
//////		{
//////			cout << p[i].first << " " << p[i].second << endl;
//////			if (p[i].second == 0)
//////			{
//////				ans = 1;
//////				break;
//////			}
//////			
//////			bool ff = 0;
//////			for (int j = 0; j < a.size(); j ++ )
//////			{
//////				int x = a[j];
//////				while (1)
//////				{
//////					if (x == i)
//////					{
//////						a.erase(a.begin() + j);
//////						ff = 1;
//////						break;
//////					}
//////					if (x == 0) break;
//////					x /= 2;
//////				}
//////				if (ff) break;
//////				
//////			}
//////			if (!ff) 
//////			{
//////				ans = 1;
//////				break;
//////			}
//////		}
////		if (ans ) cout << "NO" << endl;
////		else cout << "YES" << endl;
////	}
////	return 0;
////} 
////
//////#include<bits/stdc++.h>
//////using namespace std;
//////const int N = 55;
////////int a[N];
//////int main()
//////{
//////	int t; cin >> t;
//////	while (t -- )
//////	{
//////		int n;
//////		scanf("%d", &n);
//////		map<int, int> st;
//////		vector<int> a;
//////		bool res = 0;
//////		
//////		for (int i = 1; i <= n; i ++ ) 
//////		{
//////			int x;
//////			scanf("%d", &x);
//////			if (x > n)
//////			{
//////				a.push_back(x);
//////			}
//////			
//////			if (x <= n && st[x] == 1) 
//////			{
//////				res = 1;
//////			}
//////			
//////			if (x <= n)
//////			{
//////				st[x] = 1;
//////			}
//////		}
//////		if (res)
//////		{
//////			cout << "NO" << endl;
//////			continue;
//////		}
//////		sort(a.begin(), a.end());
//////		for (int i = 1; i <= n; i ++ )
//////		{
//////			if (!st[i])
//////			{
//////				int x = a[0];
//////				while (1)
//////				{
//////					if (x == i)
//////					{
//////						a.erase(a.begin());
//////						break;
//////					}
//////					if (x == 0)
//////					{
//////						res = 1;
//////						break;
//////					}
//////					x /= 2;
//////				}
//////			}
//////			if (res) break;
//////		}
//////		if (res) cout << "NO" << endl;
//////		else cout << "YES" << endl;
//////	}
//////	return 0;
//////}
//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//
//bool cmp(pair<int, int> a, pair<int, int> b)
//{
//	return a.second < b.second;
//}
//signed main()
//{
//	int T;
//	cin >> T;
//	while (T -- )
//	{
//		int n;
//		cin >> n;
//		
//		map<int, int> f;
//		map<int, int> num;
//		pair<int, int> p[n + 10];
//		int cnt = 0;
//		vector<int> a[10000008];
//		for (int i = 1; i <= n; i ++ )
//		{
//			int x;
//			cin >> x;
//			if (num[x] == 0) a[x].clear();
//			int xx = x;
//			num[x] ++;
//			while (x > 0)
//			{
//				f[x] ++;
//				a[x].push_back(xx);
////				cout << x << " ";
//				x /= 2;
//			}
////			cout << endl;
//		}
//		
//		map<int, int> stt;
//		for (int i = 1; i <= n; i ++ )
//		{
//			p[i] = {i, f[i]};
//		}
//		sort(p + 1, p + 1 + n, cmp);
//		
//		bool ans = 0;
//		
//		for (int i = 1; i <= n; i ++ ) 
//		{
////			cout << p[i].first << " " << p[i].second << endl;
//			sort(a[i].begin(), a[i].end());
//		}
//		
////		for (int i = 1; i <= n; i ++ )
////		{
//////			cout << i << " ::  ";
////			for (int j = 0; j < a[i].size(); j ++ )
////			{
////				cout << a[i][j] << " ";
////			}
////			cout << endl;
////		}
//		
//		for (int i = 1; i <= n; i ++ )
//		{
//			auto t = p[i];
//
//			bool ff = 0;
////			cout << t.first<< "  :::   ";
//			for (int j = 0; j < a[t.first].size(); j ++ )
//			{
//				if (num[a[t.first][j]] > 0)
//				{
////					cout << num[a[t.first][j]] << endl;
//					num[a[t.first][j]] -- ;
//					ff = 1;
//					break;
//				}
//			}
//			if (!ff)
//			{
//				ans = 1;
//				break;
//			}
//		}
//		if (ans ) cout << "NO" << endl;
//		else cout << "YES" << endl;
//	}
//	return 0;
//} 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		int a[n + 10];
		int k[n + 10];
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		for (int )
	}
	return 0;
}
