#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	int a[n + 5];
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= m; i ++ )
	{
		int x; cin >> x;
		int f;
		for(int i = 1; i <=n ; i ++ )
		{
			if (a[i] == x)
			{
				f = i;
				cout << i << " " ;
				break;
			}
		}
		for (int i = f; i >= 2; i --)
		{
			a[i] = a[i - 1];
		}
		a[1] = x;
	}
	
	return 0;
}
