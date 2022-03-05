#include<bits/stdc++.h> 
using namespace std;
const int N = 5e5 + 10;
vector<int> g[N];
int a[N];
int b[N];
bool st[N];
int dis[N];
int n, m, k;

queue<int> q;

int cnt = 0;

bool bfs()
{
	st[a[1]] = 1;
	dis[a[1]] = 0;
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
//		cout << t << endl;
		for (int i = 0; i < g[t].size(); i ++ )
		{
			int j = g[t][i];
//			cout << j << endl;
			if (!st[j])
			{
				q.push(j);
				st[j] = 1;
				dis[j] = dis[t] + 1;
				if (b[j] == 1)
				{
					if (dis[j] % 2 != 0) 
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i ++ )
	{
		int u, v;
		scanf("%d %d", &u, &v);
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for (int i = 1; i <= k; i ++ )
	{
		cin >> a[i];
		b[a[i]] = 1;
	}
	q.push(a[1]);
	if (bfs()) cout << "YES";
	else cout << "NO";
	return 0;
}
////
///*
//8 7 4
//1 2
//2 3
//3 4
//2 5
//5 6
//1 7
//7 8
//1 3 5 8
//*/
///*
//8 7 1
//1 2
//2 3
//3 4
//2 5
//5 6
//1 7
//7 8
//1 3 5 8
//*/
//
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 500010, M = N * 2;
//int h[N], e[M], ne[M], idx;
//int colour[N];
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx ++;
//}
//int n, m, k;
//bool dfs(int u, int c)
//{
//	colour[u] = c;
//	
//	for(int i = h[u]; i != -1; i = ne[i] )
//	{
//		int j = e[i];
//		if(!colour[j])
//		{
//			if(!dfs(j, 3 - c)) return false;
//		}
//		else if (colour[j] == c )
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	cin >> n >> m >> k;
//	memset(h, -1, sizeof h);
//	while (m -- )
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	int aa[n + 10];
//	bool flag = true;
//	
//	dfs(1, 0);
//	
//	for (int i = 1; i <= k; i ++ )
//	{
//		cin >> aa[i];
//		
//	}
////	for (int i= 1; i <= n; i ++ ) cout << colour[i] << " ";
//
//	for (int i= 2; i <= k; i ++ )
//	{
//		if (colour[aa[i]] != colour[aa[i - 1]])
//		{
//			flag = false;
//		}
//	}
//
//	if (flag)cout << "YES" << endl;
//	else cout << "NO" << endl;
//	
//	return 0;
//}
//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 5e5 + 10;
//vector<int> g[N];
//int a[N];
//int b[N];
//bool st[N];
//int dis[N];
//int n, m, k;
//
//queue<int> q;
//
//int cnt = 0;
//
//bool bfs()
//{
//	st[a[1]] = 1;
//	dis[a[1]] = 0;
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
////		cout << t << endl;
//		for (int i = 0; i < g[t].size(); i ++ )
//		{
//			int j = g[t][i];
////			cout << j << endl;
//			if (!st[j])
//			{
//				q.push(j);
//				st[j] = 1;
//				dis[j] = dis[t] + 1;
//				if (b[j] == 1)
//				{
//					if (dis[j] % 2 != 0) 
//					{
//						return false;
//					}
//				}
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i ++ )
//	{
//		int u, v;
//		scanf("%d %d", &u, &v);
//		g[u].push_back(v);
//		g[v].push_back(u);
//	}
//	for (int i = 1; i <= k; i ++ )
//	{
//		cin >> a[i];
//		b[a[i]] = 1;
//	}
//	q.push(a[1]);
//	if (bfs()) cout << "YES";
//	else cout << "NO";
//	return 0;
//}
//
/*
8 7 4
1 2
2 3
3 4
2 5
5 6
1 7
7 8
1 3 5 8
*/
/*
8 7 1
1 2
2 3
3 4
2 5
5 6
1 7
7 8
1 3 5 8
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 500010, M = N * 2;
int h[N], e[M], ne[M], idx;
int colour[N];
void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx;
	idx ++;
}
int n, m, k;
bool dfs(int u, int c)
{
	colour[u] = c;
	
	for(int i = h[u]; i != -1; i = ne[i] )
	{
		int j = e[i];
		if(!colour[j])
		{
			if(!dfs(j, 3 - c)) return false;
		}
		else if (colour[j] == c )
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cin >> n >> m >> k;
	memset(h, -1, sizeof h);
	while (m -- )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	int aa[n + 10];
	bool flag = true;
	
	if (!dfs(1, 0))
    {
        cout << "YES" << endl;
        return 0;
    }
	
	for (int i = 1; i <= k; i ++ )
	{
		cin >> aa[i];
		
	}
//	for (int i= 1; i <= n; i ++ ) cout << colour[i] << " ";

	for (int i= 2; i <= k; i ++ )
	{
		if (colour[aa[i]] != colour[aa[i - 1]])
		{
			flag = false;
		}
	}

	if (flag)cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}

