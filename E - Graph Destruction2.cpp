//#include<bits/stdc++.h> 
//using namespace std;
//
//int n, m;
//const int N = 2e5 + 10;
//
//int p[N]; //存储每个点的祖宗节点
//
//// 返回x的祖宗节点
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    return p[x];
//}
//
//vector<int> g[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i ++ ) p[i] = i;
//	for (int i = 1; i <= m; i ++ )
//	{
//		int a, b; 
//		scanf("%d%d", &a, &b);
//		g[a].push_back(b);
//	}
//	
//	vector<int> ans;
//	ans.push_back(0);
//	for (int i = n; i >= 1; i -- )
//	{
//		for (int j = 0; j < g[i].size(); j ++ )
//		{
//			int v = g[i][j];
//			if (v > i) p[find(v)] = find(i);
//		}
//		int f[N]={0};
//		int x = 0;
//		for (int j = n; j >= i; j -- )
//		{
//			if (f[find(j)] == 0) 
//			{
//				x ++;
//				f[find(j)] = 1;
//			}
//		}
//		ans.push_back(x);
//	}
//	for (int i = ans.size() - 2; i >= 0; i -- )
//	{
//		printf("%d\n", ans[i]);
//	}
//	return 0;
//}

#include<bits/stdc++.h> 
using namespace std;

int n, m;
const int N = 2e5 + 10;

int p[N]; //存储每个点的祖宗节点

// 返回x的祖宗节点
int find(int x)
{
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

vector<int> g[N];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ) p[i] = i;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b; 
		scanf("%d%d", &a, &b);
		g[a].push_back(b);
	}
	
	vector<int> ans;
	ans.push_back(0);
	
	int res  = 0;  
	for (int i = n; i >= 1; i -- )
	{
		res++;
		for (int j = 0; j < g[i].size(); j ++ )
		{
			int v = g[i][j];
			if (p[find(v)] != find(i)) 
			{
				p[find(v)] = find(i);res --;
			}
		}
		ans.push_back(res);
	}
	for (int i = ans.size() - 2; i >= 0; i -- )
	{
		printf("%d\n", ans[i]);
	}
	return 0;
}
