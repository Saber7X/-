#include<bits/stdc++.h>
using namespace std;
const int N = 5005, mod = 1000000007;
char b[N], a[N];
int f[N][N];
int main()
{
	scanf("%s%s", a + 1, b + 1);
	int lena = strlen(a + 1), lenb = strlen(b + 1);
	for(int i = 1; i <= lena; i ++ )
	{
		for(int j = 1; j <= lenb; j ++ )
		{
			if(a[i] == b[j])
			{
				f[i][j] = (f[i][j - 1] + f[i - 1][j - 1] + 1) % mod;
			}
			else
			{
				f[i][j] = f[i][j - 1];
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= lena; i ++ )
	{
		ans = (ans + f[i][lenb]) % mod;
	}
	cout << ans << endl;
	return 0;
}
