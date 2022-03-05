//#include<bits/stdc++.h>
////#define int long long
//using namespace std;
//const int N = 2e5 + 10;
//
//int s[N];
//int height[N];//高度 
//int n, m, k; 
//
//void init()//初始化 
//{
//	for (int i = 0; i <= N; i ++ ) 
//	{
//		s[i] = i;
//	}
//}
//
//int find(int x)//找祖宗节点 
//{
//	if (x != s[x]) s[x] = find (s[x]);
//	return s[x];
//}
//
//void hebing(int x, int y)//合并 
//{
//	x = find(x);
//	y = find(y);
//	s[x] = y;
////	if (height[x] == height[y])
////	{
////		height[x] = height[x] + 1;
////		s[y] = x;
////	}
////	else
////	{
////		if (height[x] < height[y]) s[x] = y;
////		else s[y] = x;
////	}
//}
//
//pair<int, int> p[N];
//
//signed main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		init(); 
//		cin >> n >> m >> k;
//		int cnt = 0; //记录冲突关系数量 
//		int cnt1 = n; //记录朋友圈总数 
//		int aa, bb; // 记录最终朋友圈数，完好朋友圈数 
//		map<int, int> f;
//		for (int i = 1; i <= m + k; i ++ )
//		{
//			
//			int t, a, b; scanf("%d%d%d", &t, &a, &b);
//			if (t == 0) 
//			{
//				//如果两个人是好朋友，那么就合并两个人的关系 
////				if (f[a] == 0 || f[b] == 0 ) cnt1 --;//如果两个节点都没有出现过那么朋友圈总数++；
//				if (find(a) != find(b)) cnt1 --;// !!!!!!!!!!!!!这边要先判断再合并！！！！！！！！！！！！！！ 
//				hebing(a, b);
//				f[a] = 1;
//				f[b] = 1;
//			}
//			else 
//			{
//				p[cnt].first = a;
//				p[cnt].second = b;
//				cnt ++;//冲突数量 
//			}
//			cout << cnt1 << " ";
//			int ans = 0; 
//			map<int, int> ff;
//			for (int i = 0; i < cnt; i ++ )
//			{
//				int x = p[i].first;
//				int y = p[i].second;
////				cout << find(x) << " : " << find(y) << endl;
//				if (find(x) == find(y) && ff[find(x)] == 0) 
//				{
//					ff[find(x)] = 1;
//					ans ++;
////					cout << ans << endl;
//				}
//				
//			}
//			cout << cnt1 - ans << endl;
//			if(i == m + k) 
//			{
//				aa = cnt1;//最终朋友圈总数 
//				bb = ans;// 最终冲突朋友圈人数； 
//			}
//		}
//		map<int, int> sum; //每个朋友圈的人数
//		int zu[N] ; //存祖宗节点
//		int ji = 0;//记录有几个祖宗节点 
//		map<int, int> xxx; //存冲突关系的数量 
//		int hash[N]={0};//用来去重 
//		for (int i = 1; i <= n; i ++ ) 
//		{
//			if (hash[find(i)] == 0)
//			{
//				zu[ji ++] = find(i);
//				hash[find(i)] = 1;
//			} 
//		}
//		for (int i = 1; i <= n; i ++ )
//		{
//			sum[find(i)] ++;
//		}
//		for (int i = 0; i < k; i ++ )
//		{
//			int x = p[i].first;
//			int y = p[i].second;
//			if (find(x) == find(y)) xxx[find(x)] ++;
//		}
//		int maxn = 0;
//		for (int i = 0; i < ji; i ++ )
//		{
//			if (xxx[zu[i]] <= 1) //如果冲突关系的数量小于1
//			{
//				maxn = max(sum[zu[i]], maxn);
//			 } 
//		}
//		cout << maxn << endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N = 2e5 + 10;

int s[N];
int height[N];//高度 
int n, m, k; 

void init()//初始化 
{
	for (int i = 0; i <= N; i ++ ) 
	{
		s[i] = i;
	}
}

int find(int x)//找祖宗节点 
{
	if (x != s[x]) s[x] = find (s[x]);
	return s[x];
}

void hebing(int x, int y)//合并 
{
	x = find(x);
	y = find(y);
	s[x] = y;
//	if (height[x] == height[y])
//	{
//		height[x] = height[x] + 1;
//		s[y] = x;
//	}
//	else
//	{
//		if (height[x] < height[y]) s[x] = y;
//		else s[y] = x;
//	}
}

pair<int, int> p[N];

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		init(); 
		cin >> n >> m >> k;
		int cnt = 0; //记录冲突关系数量 
		int cnt1 = n; //记录朋友圈总数 
		int aa, bb; // 记录最终朋友圈数，完好朋友圈数 
		map<int, int> f;
		for (int i = 1; i <= m + k; i ++ )
		{
			
			int t, a, b; scanf("%d%d%d", &t, &a, &b);
			if (t == 0) 
			{
				//如果两个人是好朋友，那么就合并两个人的关系 
//				if (f[a] == 0 || f[b] == 0 ) cnt1 --;//如果两个节点都没有出现过那么朋友圈总数++；
				if (find(a) != find(b)) cnt1 --;// !!!!!!!!!!!!!这边要先判断再合并！！！！！！！！！！！！！！ 
				hebing(a, b);
				f[a] = 1;
				f[b] = 1;
			}
			else 
			{
				p[cnt].first = a;
				p[cnt].second = b;
				cnt ++;//冲突数量 
			}
			cout << cnt1 << " ";
			int ans = 0; 
			map<int, int> ff;
			for (int i = 0; i < cnt; i ++ )
			{
				int x = p[i].first;
				int y = p[i].second;
//				cout << find(x) << " : " << find(y) << endl;
				if (find(x) == find(y) && ff[find(x)] == 0) 
				{
					ff[find(x)] = 1;
					ans ++;
//					cout << ans << endl;
				}
				
			}
			cout << cnt1 - ans << endl;
			if(i == m + k) 
			{
				aa = cnt1;//最终朋友圈总数 
				bb = ans;// 最终冲突朋友圈人数； 
			}
		}
		map<int, int> sum; //每个朋友圈的人数
		int zu[N] ; //存祖宗节点
		int ji = 0;//记录有几个祖宗节点 
		map<int, int> xxx; //存冲突关系的数量 
		int hash[N]={0};//用来去重 
		for (int i = 1; i <= n; i ++ ) 
		{
			if (hash[find(i)] == 0)
			{
				zu[ji ++] = find(i);
				hash[find(i)] = 1;
			} 
		}
		for (int i = 1; i <= n; i ++ )
		{
			sum[find(i)] ++;
		}
		for (int i = 0; i < k; i ++ )
		{
			int x = p[i].first;
			int y = p[i].second;
			if (find(x) == find(y)) xxx[find(x)] ++;
		}
		int maxn = 0;
		for (int i = 0; i < ji; i ++ )
		{
			if (xxx[zu[i]] <= 1) //如果冲突关系的数量小于1
			{
				maxn = max(sum[zu[i]], maxn);
			 } 
		}
		cout << maxn << endl;
	}
	return 0;
}
