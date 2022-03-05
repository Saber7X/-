#include<bits/stdc++.h>
using namespace std;
bool st[100][100];
int xx[4]={0,1,0,-1};
int yy[4]={1,0,-1,0};
int dfs(int x, int y)
{
	int ff = 1;
	for(int i = 0; i <4;i ++)
	{
		int a = x + xx[i];
		int b = y + yy[i];
		if(num[a][b] == 1 && !st[a][b])
		{
			ff += dfs(a, b);
		}
	}
	return ff;
	
}


int main()
{
		int n; cin >> n; int flag[ n + 1 ] = {0};
		int num[n + 1][n + 1] = {0};
		for(int i = 1; i <= n; i ++ )
		{
			cin >> flag[i];
		}
		for(int i = n - 1; i >= 1; i -- )
		{
			for(int j = 1; j <=i; j ++ )
			{
				cin >> num[n - i][j];
			}
		}
		int ans = -0x3f;
		for (int i = n - 1; i >= 1 ; i ++ )
		{
			 for(int j = 1; j < = i ; j ++ )
			 {
			 	if(!st[n-i][j]&&num[n-i][j] == 1)
			 	{
			 		ans = max(ans,dfs(n - i,j));
				}
			 }
		}
		sort(num + 1, num + 1 + n);
		int sum = 0;
		for(int i = n ; i >= n-ans; i --)
		{
			
		}

	return 0;
}
