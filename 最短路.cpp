//#include <bits/stdc++.h>
//
//using namespace std;
//
////#define int long long************************不要开longlong!!!!!!! 
//
//const int N = 510;
//
//int n, m, dist[N], g[N][N]; // 长，宽，记录点到起点的距离，邻接矩阵（记录路径） 
//
//bool st[N];// 来判断该点有没有被走过 
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	
//	dist[1] = 0;
//	
//	for(int i = 0; i < n; i ++)
//	{
//		int t = -1;
//	
//		for(int j = 1; j <= n; j ++)//*******这个地方不懂 
//		{
//			if(!st[j] && (dist[j] < dist[t] || t == -1)) 
//	
//			t = j;
//		}
//		st[t] = true;	
//	
//		for(int j = 1; j <= n; j ++)
//		{
//			dist[j]=min(dist[j],dist[t]+g[t][j]);
//		}
//	}
//	if(dist[n] == 0x3f3f3f3f) return -1;
//	
//	return dist[n];
//}
//
//signed main()
//{	
//	cin >> n >> m;
//	
//	memset(g, 0x3f, sizeof g);
//	
//	while(m --) 
//	{
//		int a, b, c;
//	
//		cin >> a >> b >> c;
//	
//		g[a][b] = min(g[a][b], c);
//	}
//	int t = dijkstra();
//	
//	cout << t << endl;
//	
//	return 0;
//}
#include<bits/stdc++.h> 
using namespace std;
const int N = 510;
int n, m, g[N][N], dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	
	for(int i = 0; i < n; i ++)//迭代n次
	{
		int t = -1;
		for(int j = 1; j <= n; j ++) 
		{
			if(!st[j] && (t == -1 || dist[t] > dist[j] ))
			{
				t = j;
			}
		}
		
		st[t] = true;
		
		for(int j = 1; j <= n; j ++)
		{
			dist[j] = min(dist[t] + g[t][j], dist[j]);
		}
	}
	
	if(dist[n] == 0x3f3f3f3f) return -1;
	return dist[n];
	
}

int main()
{
	memset(g, 0x3f, sizeof g);
	
	cin >> n >> m;
	while(m --)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	dist[1] = 0;
	cout << dijkstra() << endl;
	return 0;
}
