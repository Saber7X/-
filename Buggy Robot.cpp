//按照它给的顺序走一遍
//如果能走到终点就是0
//不能的话从最后的点到终点做最短路，然后用给的删去自己找的 

#include<bits/stdc++.h>
using namespace std;
const int N = 60;

char g[N][N];
int d[N][N];

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};
int n, m;
int bfs(int x, int y, int a, int b)
{
	queue<pair<int, int>> q;
	q.push({x, y});
	memset(d, -1, sizeof d);
	d[x][y] = 0;
	while (!q.empty())
	{
		auto t = q.front();
		if (t.first == a && t.second == b)
		{
			return d[t.first][t.second];
			break;
		}
		q.pop();
		for (int i = 0; i < 4; i ++ )
		{
			int dx = xx[i] + t.first;
			int dy = yy[i] + t.second;
			
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] != '#' && d[dx][dy] == -1)
			{
				q.push({dx, dy});
				d[dx][dy] = d[t.first][t.second] + 1;
			}
		}
	}
}
int main()
{
	
	int a, b, c, d;
	string s;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
			if (g[i][j] == 'R') a = i, b = j;
			if (g[i][j] == 'E') c = i, d = j;
		}
	}
	
	cin >> s;
	
	int x = a, y = b;
	for (int i = 0; i < s.length(); i ++ )
	{
			
		if (s[i] == 'R' && g[x][y + 1] != '#')
		{
			y += 1;
			if (y > n) y = m;
		}
		else if (s[i] == 'L' && g[x][y - 1] != '#')
		{
			y --;
			if (y > 1) y = 1;
		}
		else if (s[i] == 'U' && g[x - 1][y] != '#')
		{
			x --;
			if (x < 1) x = 1;
		}
		else if (s[i] == 'D' && g[x + 1][y] != '#')
		{
			x++;
			if (x > n) x = n;
			
		}
		
		if(x == c && y == d && g[x][y + 1] != '#')
		{
			cout << 0;
			return 0;
		}
	}
	
	//从x，y到c,d。 
	//	cout << x << " "  << y << endl;
	
	int ans = bfs(x, y, c, d) / 2;
	if(bfs(x, y, c, d) % 2 != 0) ans++;
	cout << ans<<endl;
	
	return 0;
}
