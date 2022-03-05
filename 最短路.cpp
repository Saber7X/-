//#include <bits/stdc++.h>
//
//using namespace std;
//
////#define int long long************************��Ҫ��longlong!!!!!!! 
//
//const int N = 510;
//
//int n, m, dist[N], g[N][N]; // ��������¼�㵽���ľ��룬�ڽӾ��󣨼�¼·���� 
//
//bool st[N];// ���жϸõ���û�б��߹� 
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
//		for(int j = 1; j <= n; j ++)//*******����ط����� 
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
	
	for(int i = 0; i < n; i ++)//����n��
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
