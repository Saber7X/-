#include<bits/stdc++.h>
using namespace std;
const int N = 1010;

int n, m;
char a[N], b[N];
int f[N][N];

int main()
{
	scanf("%d%s", &n, a + 1);
	scanf("%d%s", &m, b + 1);
	
	for(int i = 0; i <= m; i ++ )
	{
		f[0][i] = i;
	}
	for(int i = 0; i <= n; i ++ )
	{
		f[i][0] = i;
	}
	
//就是把三种情况都枚举一遍 ，然后每一步都取最小值记录一下，维护每一步都是最小值，枚举每个子串的情况，一步一步累加到最后一步 
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= m; j ++ )
		{
			f[i][j] = min(f[i - 1][j] + 1, f[i][ j - 1] + 1);
			if(a[i] == b[j])
			{
				f[i][j] = min(f[i][j], f[i - 1][j - 1]);
			}
			else
			{
				f[i][j] = min(f[i][j], f[i - 1][ j - 1 ] + 1);
			}
			cout <<"i == "<< i << " j == "<<j<<"  "<< f[i][j] <<endl;
		} 
	}
	
	cout << f[n][m] << endl;
	return 0;
}
