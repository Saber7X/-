#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int n, m;
int a[N];
int flag[N][N];
int End[N][N];
int main()
{
	cin >> n >> m;
	if (m == 0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	
	for (int i = 1; i <= n; i ++ )	a[i] = i;
	
	for (int i = 1; i <= m; i ++ )
	{
		int x, y; cin >> x >> y;
		flag[x][y] = 1;
		flag[y][x] = 1;
	}
	
	for (int i = 1; i <= m; i ++ )
	{
		int x, y; 
		cin >> x >> y;
		End[x][y] = 1;
		End[y][x] = 1;
	}
	
	
	do
	{
//		for (int i = 1; i <= n; i ++ ) cout << a[i] << " ";
//		cout << endl;
		bool f = 0;
		int z[N][N];
		memset(z, 0, sizeof z);
		
		for (int i = 1; i <= n; i ++)
		{
			for (int j = 1; j <= n; j ++ )
			{
				
				z[i][j] = flag[a[i]][a[j]];
			}
		}
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= n; j ++ )
			{
				if (z[i][j] != End[i][j] )
				{
					f = 1;
					break;
				}
			}
			if (f == 1) break;
		}
		
		if (f == 0)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}while (next_permutation(a + 1, a + 1 + n));
	
	cout << "No" << endl;
	return 0;
}

/*
4 4

1 2
1 3
1 4
3 4

1 3
1 4
2 3
3 4

*/
