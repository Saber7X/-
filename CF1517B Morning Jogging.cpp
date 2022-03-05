#include<bits/stdc++.h>
using namespace std;
struct name{
	int n;
	int x;
	int y;
}v[100000];
bool cmp(name a, name b)
{
	return a.n < b.n;
}
bool cmp1(name a, name b)
{
	if (a.x == b.x)
	{
		return a.y < b.y;
	}
	return a.x < b.x;
}
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, m;
		cin >> n >> m;
		bool st[n + 10][m + 10] = {0};
		int g[n + 10][m + 10] = {0};
		int c = 0;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				int x;
				cin >> x;
				v[c ++ ] = {x, i, j};
			}
		}
		sort(v, v + c, cmp);
		
		int cnt = 1;
		for (int i = 0; i < c; i ++ )
		{
			g[v[i].x][cnt ++] = v[i].n;
			v[i].n = 0x3f3f3f3f;
			v[i].x = 99999999;
			v[i].y = 99999999;
			if (cnt > m) break;
		}
		cout << endl;
		
		sort(v, v + c, cmp1);
		
		cnt = 1;
		for (int i = 0; i < c; i ++ )
		{
			 
			if (v[i].x >= 1 && v[i].x <= n && v[i].y >= 1 && v[i].y <= m)
			{
//				cout << "now£º" << v[i].n <<"  "<< v[i].x << "  " << v[i].y << endl;
				while (g[v[i].x][cnt] != 0) 
				{
					cnt ++;
					if (cnt > m) cnt = 1;
				}
				
				g[v[i].x][cnt] = v[i].n;
			}
			
		}
//		cout << " ans ""  " << endl;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= m; j ++ )
			{
				cout << g[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
