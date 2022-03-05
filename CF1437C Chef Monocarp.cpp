#include<bits/stdc++.h> 
using namespace std;
const int N = 500;
int f[N][N], a[N];
int main() 
{
	int t;
	cin >> t;
	while(t -- )
	{
		int n;
		cin >> n;
		for(int i = 1; i <= n; i ++ ) cin >> a[i];
		sort(a + 1, a + 1 + n);
		memset(f, 0x3f, sizeof f);
		for(int i = 0; i <= 2 * n; i ++ )
		{
			f[0][i] = 0;
		}
		for(int i = 1; i <= n; i ++ )//枚举菜品 
		{
			for(int j = 1; j <= 2 * n; j ++ )//枚举每一分钟 
			{
				f[i][j] = min(f[i][j - 1], f[i - 1][j - 1] + abs(j - a[i]));
			}
		}
		cout << f[n][2 * n] << endl;
	}
	return 0;
}
