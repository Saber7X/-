#include<bits/stdc++.h>
using namespace std;
const int N = 100;

int n, m; //n––m¡–

char g[N][N];

int ans = 1;

int xx[4] = {-1, 0, 1, 0};
int yy[4] = {0, 1, 0, -1};

int bfs(int x, int y)
{
	queue<pair<int, int>> q;
	
	q.push({x, y});
	int ans = 0;
	
	while (q.empty() == 0) 
	{
		pair<int, int> t = q.front();
		q.pop();
		ans ++;
		
		int x = t.first;
		int y = t.second;
		
		for (int i = 0; i < 4; i ++ )
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] == '.')
			{
				g[dx][dy] = '#';
				
				q.push({dx, dy});
			}
		}
	}
	return ans;
	
}

int main()
{
	while (cin >> m >> n)
	{
		if (n == 0 && m == 0) break;
		
		int x, y;
		ans = 1;
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cin >> g[i][j];
				if (g[i][j] == '@') 
				{
					x = i, y = j;
				}
			}
		}
		
		cout << bfs(x, y) << endl;
	}
	return 0;
}
