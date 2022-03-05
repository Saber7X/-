#include<bits/stdc++.h> 
using namespace std;
const int N = 150;

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

struct node{
	int x; 
	int y;
	int k;//当前已经走过序列中的第几步，每次更新的都是它的后一步 
	int step;//第几次操作 
	 bool operator < (const node &b) const {
        return step > b.step;
    }
};

int n, m;
char g[N][N];
int d[N][N][N];
char s[N];
int len;
int sx, sy, ex, ey; //起点终点 

void bfs()
{
	priority_queue<node> q;
	q.push({sx, sy, 0, 0}); //放入起点 
	memset(d, 0x3f3f3f3f, sizeof d); //初始化距离
	d[sx][sy][0] = 0;
	
	while (!q.empty())
	{
		node t = q.top();
		q.pop();
		int x = t.x, y = t.y, k = t.k, step = t.step;
		if (g[x][y] == 'E') continue;
		
//		cout << x << " " << y << " " << k << " " << step << endl;
		
		//添一步走
		for (int i = 0; i < 4; i ++ ) 
		{
			int dx = x + xx[i];
			int dy = y + yy[i];
			
			//此处也要判断可以走，因为走不了没有意义 
			if (d[dx][dy][k] > step + 1 && dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] != '#')
			{
				d[dx][dy][k] = step + 1; //更新距离
				q.push({dx, dy, k, step + 1}); //放入队列 
			}
		}
		
		if (k + 1 <= len) //防止死循环 
		{
			
			//删一步走 
			if (d[x][y][k + 1] > d[x][y][k] + 1) 
			{
				d[x][y][k + 1] = step + 1;
				q.push({x, y, k + 1, step + 1});
			}
			
			int dx = x, dy = y; 
			//直接走
			if (s[k + 1] == 'U') 
			{
				dx --;
			}
			else if (s[k + 1] == 'D')
			{
				dx ++;
			}
			else if (s[k + 1] == 'L')
			{
				dy --;
			}
			else if (s[k + 1] == 'R')
			{
				dy ++;
			}
			
			//如果可以走 
			if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && g[dx][dy] != '#')
			{
				if (d[dx][dy][k + 1] > step)
				{
					d[dx][dy][k + 1] = step;
					q.push({dx, dy, k + 1, step});
				}
			}
			else //撞墙or出界 
			{
				if (d[x][y][k + 1] > step) 
				{
					d[x][y][k + 1] = step;
					q.push({x, y, k + 1, step});
				}
			}
		}
	}
}


int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			cin >> g[i][j];
			if (g[i][j] == 'R')
			{
				sx = i;
				sy = j;
			}
			if (g[i][j] == 'E')
			{
				ex = i;
				ey = j;
			}
		}
	}
	
	scanf("%s", s + 1);
	len = strlen(s + 1);
	bfs();
	int ans = 0x3f3f3f3f;
	for (int i = 0; i <= len; i ++ )
	{
		ans = min(ans, d[ex][ey][i]);
	}
	cout << ans << endl;
	return 0;
}
