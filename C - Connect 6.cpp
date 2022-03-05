#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char g[N][N];

int xx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int yy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int n;
bool ask (int x, int y)
{
	
	for (int i = 0; i < 8; i ++ )
	{
		int dx = x, dy = y;
		int cnt = 0;
		int ex = 2;
		while (1)
		{
			if (1 <= dx && dx <= n && 1 <= dy && dy <= n && (g[dx][dy] == '#' || ex > 0)) 
			{
				if (g[dx][dy] == '.') ex --;
				cnt ++;
			}
			else 
			{
				break;
			}
			if (cnt >= 12)
			{
				return true;
			}
			dx += xx[i];
			dy += yy[i];
		}
	}
}

int main()
{
	
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%s", g[i] + 1);
	}
	cout << endl;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			if (ask(i, j))
			{
				cout << "Yes" << endl;
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}

