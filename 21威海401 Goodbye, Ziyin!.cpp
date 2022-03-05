#include<bits/stdc++.h>
using namespace std;
const int N =1e6 + 10;

int n;
int f[N];
int u, v; 

int main()
{
	cin >> n;
	for (int i = 1; i <= n - 1; i ++ )
	{
		scanf("%d%d", &u, &v); //²»ÄÜÓÃcin 
		f[u]++;
		f[v]++;
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (f[i] <= 2) ans ++;
		if (f[i] > 3)
		{
			ans = 0;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
