#include<bits/stdc++.h> 
using namespace std;
const int N = 5005;
int f[N][N];
int p1[N], p0[N] ;
int main()
{
	int n;
	cin >> n;
	int a = 0, b = 0;
	for(int i = 1; i <= n; i ++ )
	{
		int u; 
		cin >> u;
		if(u) p1[++a] = i;
		else p0[++b] = i;
	}
	memset(f, 0x3f, sizeof f);
	for(int i = 0; i <= n; i ++ ) f[0][i] = 0;
	for(int i = 1; i <= a; i ++ )
	{
		for(int j = 1; j <= b; j ++ )
		{
			f[i][j] = min(f[i][j - 1], f[i - 1][j - 1] + abs(p1[i] - p0[j]));//枚举每个位置所需的花费，取min 
		}
	}
	cout << f[a][b] ;
	return 0;
}
