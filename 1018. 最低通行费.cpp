 #include<bits/stdc++.h> 
using namespace std;
const int N = 110;
int w[N][N];
int f[N][N];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= n; j ++ )
		{
			cin >> w[i][j];
		}
	}
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= n; j ++ )
		{
			if(i == 1 && j == 1) f[i][j] = w[i][j];
			else
			{
				f[i][j] = 0x3f3f3f3f;
				
				//不在第一行 
				if(i > 1) f[i][j] = min(f[i][j], f[i - 1][j] + w[i][j]);
				
				//不在第一列 
				if(j > 1) f[i][j] = min(f[i][j], f[i][j - 1] + w[i][j]);
			}
		}
	}
	cout << f[n][n] << endl;
	return 0;
}
