#include<bits/stdc++.h>
using namespace std;
int xx = 1, yy = 1;
int n, m;
int sx, sy, ex, ey;
int ans = 0;
void dfs(int x, int y)
{
	if (x == 1 || x == n) xx *= -1;
	if (y == 1 || y == m) yy *= -1;
	
	if (x == ex || y == ey) return;
	ans ++;
	
	int dx = x + xx;
	int dy = y + yy;
	dfs(dx, dy);
}

int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		cin >> n >> m;
		cin >> sx >> sy;
		cin >> ex >> ey;
		ans = 0;
		int res=0;
		while (1)
		{
			if (sx == ex || sy == ey) 
			{
				res++;
				break;
			}
			if(sx<n&&sy<m)
			{
				sx ++;
				sy++;
				ans++;
			}else{
				break;
			}
			
		}
		if(res==0)
		{
			dfs(sx, sy);
			cout << ans << endl;
		}else{
			cout << ans << endl;
		}
//		dfs(sx, sy);
//		cout << ans << endl;
	}
	return 0;
}
