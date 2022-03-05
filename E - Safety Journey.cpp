//#include<bits/stdc++.h>
//using namespace std;
//const int N = 5005;
//int n, m, k;
//bool sa[N][N];
//int e[N * 2], ne[N * 2], h[N], idx;
//void add(int a, int b)
//{
//    e[idx] = b;
//    //cout << e[idx] <<" ";
//    ne[idx] = h[a];
//    //cout<< ne[idx] << " ";
//    h[a] = idx++;
//    //cout << h[a]<<endl;
//}
//bool st[N];
//int dfs(int u, int v)
//{
//	int ans = 1;
//	if(u == k + 1 )
//	{
//		if(v == 1)
//		{
//			return ans ;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	
//	for(int i = v; i != -1; i = ne[i])
//	{
//		cout << "1"<<endl;
//		int j = e[i];
//		if(!st[j])
//		{
//			st[j] = true;
//			ans += dfs(u + 1, j);
//			st[j] = false;
//		} 
//	}
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m >> k;
//	for(int i = 1; i <= m; i ++ )
//	{
//		int a, b;
//		cin >> a >> b;
//		sa[a][b] = true;
//	}
//	for(int i = 1; i <= n; i ++ )
//	{
//		for(int j = i + 1; j <= m; j ++ )
//		{
//			if(!sa[i][j] && !sa[j][i])
//			{
//				add(i, j);
//				add(j, i);
//			}
//			
//		}
//	}
//	
//	cout << dfs(1, 1) << endl;
//	return 0;
//}
#
