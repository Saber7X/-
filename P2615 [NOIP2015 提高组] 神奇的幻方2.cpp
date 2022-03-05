#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int g[n + 10][n + 10];
	int x = 1, y = (n + 1) / 2;
	g[x][y] = 1;
	for (int i= 2; i <= n * n; i ++ ) 
	{
		 if (x == 1 && y != n) 
		 {
		 	x = n;
		 	y ++;
		 	g[x][y] = i;
		 }
		 else if (x != 1 && y == n) 
		 {
		 	x -- ;
		 	y = 1;
		 	g[x][y] = i;
		 }
		 else if (x == 1 && y == n) 
		 {
		 	x ++;
		 	g[x][y] = i;
		 }
		 else if (x != 1 && y != n) 
		 {
		 	if (g[x - 1][y + 1] == 0)
			{
				g[x - 1][y + 1] = i;
				x = x - 1;
				y = y + 1;
			}
			else
			{
				g[x + 1][y] = i;
				x = x + 1;
			}
		 }
	}
	for (int i = 1; i <= n; i ++ ) 
	{
		for (int j = 1; j <= n; j ++ )
		{
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
