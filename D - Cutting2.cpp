#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 2500;
int n, m;
int num[N];

int ji[N][N], ou[N][N];


signed main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> num[i];
	}
//	if (n % 2 != 0) 
//	{
//		cout << 0;
//		return 0;
//	}
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i; j <= n; j ++ )
		{
			int a = 0, b = 0;
			for (int k = i; k <= j; k ++ )
			{
				if (num[k] % 2 == 0) a ++;
				else b ++;
			}
			ji[i][j] = b;
			ou[i][j] = a;
		}
	}
	
	int l = 1;
	int ans = 0;
	for (int i = 1; i < n; i ++ )
	{
		if (ji[l][i] == ou[l][i] && ji[i + 1][n] == ou[i + 1][n]) 
		{
			ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}

/*
10 100
4 1 2 3 4 5 4 4 5 5
*/
