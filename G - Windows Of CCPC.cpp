//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1050;
//
//int g[N][N];
//int g1[N][N];
//
//void dfs(int bb)
//{
//	int f = 0;
//	int ff = 0;
//	
//	for(int i = 1; i <= bb; i ++ )
//	{
//		f = 0;
//		for(int j = 1; j <= bb; j ++ )
//		{
//			int x = i, y = j;
//			x += ff;
//			y += f;
//			
//			if(g[i][j] == 1)
//			{
//				g1[x][y] = 1;
//				g1[x][y + 1] = 1;
//				g1[x + 1][y] = 0;
//				g1[x + 1][y + 1] = 1;
//			}
//			if(g[i][j] == 0)
//			{
//				g1[x][y] = 0;
//				g1[x][y + 1] = 0;
//				g1[x + 1][y] = 1;
//				g1[x + 1][y + 1] = 0;
//			}
//			f ++;
//		}
//		ff ++;
//	}
//}
//
//void dfs1(int bb)
//{
//	int f = 0;
//	int ff = 0;
//	
//	for(int i = 1; i <= bb; i ++ )
//	{
//		int f = 0;
//		
//		for(int j = 1; j <= bb; j ++ )
//		{
//			int x = i, y = j;
//			x += ff;
//			y += f;
//			
//			if(g1[i][j] == 1)
//			{
//				g[x][y] = 1;
//				g[x][y + 1] = 1;
//				g[x + 1][y] = 0;
//				g[x + 1][y + 1] = 1;
//			}
//			if(g1[i][j] == 0)
//			{
//				g[x][y] = 0;
//				g[x][y + 1] = 0;
//				g[x + 1][y] = 1;
//				g[x + 1][y + 1] = 0;
//			}
//			f ++;
//		}
//		ff ++;
//	}
//}
//int main()
//{
//	int t;
//	cin >> t;
//	while(t -- )
//	{
//		memset(g, 0, sizeof g);
//		memset(g1, 0, sizeof g1);
//		g[1][1] = 1;
//		g[1][2] = 1;
//		g[2][1] = 0;
//		g[2][2] = 1;
//		
//		int n; 
//		cin >> n;
//		
////		for(int i = 1; i <= 2; i ++ )
////			{
////				for(int j = 1; j <= 2; j ++ )
////				{
////					if(g[i][j] == 1) cout << "C";
////					else cout << "P";
////				}
////				cout << endl;
////			}
//		
//		for(int i = 2; i <= n; i ++ )
//		{
//			if(i % 2 == 0)
//			{
//				dfs(pow(2, i - 1));
//			}
//			else
//			{
//				dfs1(pow(2, i - 1));
//			}
//		}
//		
//		
//		int edge = pow(2, n);
//		if(n%2 == 0)
//		{
//			for(int i = 1; i <= edge; i ++ )
//			{
//				for(int j = 1; j <= edge; j ++ )
//				{
//					if(g1[i][j] == 1) cout << "C";
//					else cout << "P";
//				}
//				cout << endl;
//			}
//			
//		}
//		else
//		{
//			for(int i = 1; i <= edge; i ++ )
//			{
//				for(int j = 1; j <= edge; j ++ )
//				{
//					if(g[i][j] == 1) cout << "C";
//					else cout << "P";
//				}
//				cout << endl;
//			}
//		}
//	}
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

const int N = 1050;

int g[N][N];
int g1[N][N];

void dfs(int bb)
{
	int f = 0;
	int ff = 0;
	
	for(int i = 1; i <= bb; i ++ )
	{
		f = 0;
		for(int j = 1; j <= bb; j ++ )
		{
			int x = i, y = j;
			x += ff;
			y += f;
			
			if(g[i][j] == 1)
			{
				g1[x][y] = 1;
				g1[x][y + 1] = 1;
				g1[x + 1][y] = 0;
				g1[x + 1][y + 1] = 1;
			}
			if(g[i][j] == 0)
			{
				g1[x][y] = 0;
				g1[x][y + 1] = 0;
				g1[x + 1][y] = 1;
				g1[x + 1][y + 1] = 0;
			}
			f ++;
		}
		ff ++;
	}
}

void dfs1(int bb)
{
	int f = 0;
	int ff = 0;
	
	for(int i = 1; i <= bb; i ++ )
	{
		int f = 0;
		
		for(int j = 1; j <= bb; j ++ )
		{
			int x = i, y = j;
			x += ff;
			y += f;
			
			if(g1[i][j] == 1)
			{
				g[x][y] = 1;
				g[x][y + 1] = 1;
				g[x + 1][y] = 0;
				g[x + 1][y + 1] = 1;
			}
			if(g1[i][j] == 0)
			{
				g[x][y] = 0;
				g[x][y + 1] = 0;
				g[x + 1][y] = 1;
				g[x + 1][y + 1] = 0;
			}
			f ++;
		}
		ff ++;
	}
}
int main()
{
	int t;
	cin >> t;
	
	while (t -- )
	{
		memset(g, 0, sizeof g);
		memset(g1, 0, sizeof g1);
		g[1][1] = 1;
		g[1][2] = 1;
		g[2][1] = 0;
		g[2][2] = 1;
		
		int n; 
		cin >> n;
		
		for(int i = 2; i <= n; i ++ )
		{
			if(i % 2 == 0) dfs(pow(2, i - 1));
			else dfs1(pow(2, i - 1));
		}
		
		int edge = pow(2, n);
		
		if(n%2 == 0)
		{
			for(int i = 1; i <= edge; i ++ )
				for(int j = 1; j <= edge; j ++ )
				{
					if(g1[i][j] == 1) cout << "C";
					else cout << "P";
				}
				cout << endl;
		}
		else
		{
			for(int i = 1; i <= edge; i ++ )
				for(int j = 1; j <= edge; j ++ )
				{
					if(g[i][j] == 1) cout << "C";
					else cout << "P";
				}
				cout << endl;
		}
	}
	return 0;
}
