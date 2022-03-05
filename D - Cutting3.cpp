#include<bits/stdc++.h>
using namespace std;
const int N = 2500;

int n, m;
int num[N];
int ji[N][N], ou[N][N];
int maxn = 0;

int main()
{
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i ++ ) cin >> num[i];
	
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
	vector<int> v;
	int l = 1;
	
	for (int i = 1; i < n; i ++ )
	{
		if (ji[1][i] == ou[1][i] && ji[i + 1][n] == ou[i + 1][n])
		{
			v.push_back(abs(num[i] - num[i + 1]));
		}
	}
	
	sort(v.begin(), v.end());
	int ans = 0;
	
	for (int i = 0; i < v.size(); i ++ )
	{
		m -= v[i];
		if (m >= 0) ans ++;
		else break;
	}
	cout << ans << endl;
	
	return 0;
}

/*
10 10
1 2 3 4 5 6 7 8 9 10
4
*/
