//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 150;
//int g[N][N];
//int n;
//
//int xx[8] = {1, 1, -1, -1, 2, -2, 2, -1};
//int yy[8] = {2, -2, 2, -2, 1, 1, -1, -2};
//
//int flag;
//
//void dfs(int x, int y, int f)
//{
//	if (f == 1) flag = 2;
//	else flag = 1;
//	
//	g[x][y] = f;
//	
//	for (int i = 0; i < 8; i ++ )
//	{
//		int dx = x + xx[i];
//		int dy = y + yy[i];
//		if (dx >= 1 && dx <= n && dy >= 1 && dy <= n && g[dx][dy] == 0)
//		{
//			dfs(dx, dy, flag);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
////	dfs(1, 1, 1);
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= n; j ++ )
//		{
//			if ( g[i][j] == 2 || g[i][j] == 0) cout << "B";
//			else cout << "W";
//		}
//		cout << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i ++ )
	{
		if (f == 1)
		{
			for (int j = 1; j <= n; j ++ )
			{
				if (j % 2 == 0) cout << "W";
				else cout << "B";
			}
		}
		else
		{
			for (int j = 1; j <= n; j ++ )
			{
				if (j % 2 == 0) cout << "B";
				else cout << "W";
			}
		}
		f *= -1;
		cout << endl;
	}
	return 0;
}
