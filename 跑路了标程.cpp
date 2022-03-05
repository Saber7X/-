#include<bits/stdc++.h> 
using namespace std;
const int N = 55;

int n, m;
int w[N][N];
int f[N * 2][N][N];

int main()
{
	cin >> n;
	int a, b, c;
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= n; j ++ )
		{
			scanf("%d", &w[i][j]);
		}
	}
	
	for(int k = 2; k <= n + n; k ++ )
	{
		for(int i1 = 1; i1 <= n; i1 ++ ) 
		{
			for(int i2 = 1; i2 <= n; i2 ++ )
			{
				
				int j1 = k - i1, j2 = k - i2; 
				if (j1 >= 1 && j1 <= n && j2 >= 1 && j2 <= n)
				{
					int add = w[i1][j1];
					if (i1 != i2) add += w[i2][j2];
					
					int &x = f[k][i1][i2];
					
					//i1 - 1, j1   i2 - 1, j2
					x = max(x, f[k - 1][i1 - 1][i2 - 1] + add);
					
					//i1 - 1, j1   i2, j2 - 1
					x = max(x, f[k - 1][i1 - 1][i2] + add);
					
					//i1, j1 - 1   i2 - 1, j2
					x = max(x, f[k - 1][i1][i2 - 1] + add);
					
					//i1, j1  - 1  i2, j2 - 1
					x = max(x, f[k - 1][i1][i2] + add);
				}
				
			}
		}
	}
	printf("%d\n", f[n + n][n][n]);
	return 0;
}
