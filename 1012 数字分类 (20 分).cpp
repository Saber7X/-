#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int a[n + 10];
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	
	
	int a1 = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] % 2 == 0 && a[i] % 5 == 0) a1 += a[i];
	}
	if (a1 == 0) cout << "N ";
	else cout << a1 << " ";
	
	
	int cnt = 0;
	int a2 = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] % 5 == 1)
		{
			if (cnt % 2 == 0) a2 += a[i];
			else a2 -= a[i];
			
			cnt ++;
		}
	}
	if (cnt == 0) cout << "N ";
	else cout << a2 << " ";
	
	
	cnt = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] % 5 == 2)
		{
			cnt ++;
		}
	}
	if (cnt == 0) cout << "N ";
	else cout << cnt << " ";
	
	cnt = 0;
	double a3 = 0.0;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] % 5 == 3)
		{
			a3 += (double)a[i];
			
			cnt ++;
		}
	}
	if (cnt == 0) cout << "N ";
	else printf("%.1f ", a3 / (double)cnt);
	
	int maxn = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] % 5 == 4)
		{
			maxn = max(maxn, a[i]);
		}
	}
	if (maxn == 0) cout << "N";
	else cout << maxn;
	
	return 0;
}
