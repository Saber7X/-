#include<bits/stdc++.h>
using namespace std;
const int N = 20, M = 1 << N;
int n;
int w[N][N];
int f[M][N];
int main()
{
	cin >> n;
	for(int i = 0; i < n; i ++ )
	{
		for(int j = 0; j < n; j ++ )
		{
			cin >> w[i][j];
		}
	}
	memset(f, 0x3f, sizeof f);
	f[1][0] = 0;
	for(int i = 0; i < 1 << n; i ++ )//枚举每种走法 
	{
		for(int j = 0; j < n; j ++ )//枚举k点所在位置，也就是说要这一位等于1，这一位才可以作为倒数第二个点K 
		{
			if(i >> j & 1)//如果这一位等于1
			{
				for(int k = 0; k < n; k ++ )
				{
					if((i - (1 << j)) >> k & 1)
					{
						f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);
					}
				} 
			} 
		}
	}
	cout << f[(1 << n) - 1][n - 1] << endl;
	return 0; 
}
