#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5 + 1, mod = 1000000007;
int f[10][N];
int main()
{
	for(int j = 0; j <= N; j ++ )
	{
		for(int i = 0; i <= 9; i ++ )
		{
			if(i + j > 9) f[i][j] = (f[0][i + j - 10] + f[1][i + j - 10] ) % mod;
			else f[i][j] = 1;
		}
	}
	
	int t;
	scanf("%d", &t);
	
	while (t -- )
	{
		int ans = 0;
		int n, m;
		scanf("%d%d", &n, &m);
		
		while(n > 0)
		{
			ans = ( ans + f[n % 10][m]) % mod;
			n /= 10;
		}
		printf("%d\n", ans);
	}
	return 0;
}
