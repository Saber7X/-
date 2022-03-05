////#include<bits/stdc++.h>
////using namespace std;
////const int N = 1e5 + 10;
////int a[N], b[N];
////
////int main()
////{
////	int n, m;
////	while (cin >> n >> m)
////	{
////		if (n == 0 && m == 0) break;
////		int suma = 0, sumb = 0;
////		for (int i = 1; i <= n; i ++ ) 
////		{
////			cin >> a[i];
////			suma += a[i];
////		}
////		for (int i = 1; i <= n; i ++ ) 
////		{
////			cin >> b[i];
////			sumb += b[i];
////		}
////		int f[n][2] = {0, 0};
////		for (int i = 1; i <= n; i ++ )
////		{
////			for (int j = m; j >= 1; j -- )
////			{
////				int x = suma - f[j][0];
////				int y = sumb - f[j][1];
////				int x1 = x - a[i];
////				int y1 = y - b[i];
////				if (suma - sumb < x1 - y1)
////				{
////					f[j][0] += a[i];
////					f[j][1] += b[i];
////				}
////			}
////		}
////		int ans = 0;
////		for (int j = 0; j <= m; j ++ )
////		{
////			double x = suma * 1.0 - f[j][0] * 1.0;
////			double y = sumb * 1.0 - f[j][1] * 1.0;
////			double z = x / y * 100.0;
////			int zz = z;
////			ans = max(ans, zz);
////		}
////		cout << ans << endl;
////	}
////	return 0;
////}
//
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
const int N = 1001;
int n, k;
int a[N];
int b[N];

double c[N];


//         数据类型！！！！ 
bool check(double x)
{
	
	for (int i = 1; i <= n; i ++ )
	{
		c[i] = a[i] - b[i] * x;
	}
	sort(c + 1, c + 1 + n);
	double sum = 0.0;
	for (int i = n; i >= k + 1; i -- )
	{
		sum += c[i];
	}
	return sum >= 0.0;
}

int main()
{
	while (cin >> n >> k)
	{
		if (n == 0 && k == 0) break;
		memset(a, 0, sizeof a);
		memset(b, 0, sizeof b);
		memset(c, 0.0, sizeof c);
		
		
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		
		for (int i = 1; i <= n; i ++ ) cin >> b[i];
		
		
		double l = 0, r = 1;
		
		while (r - l > 1e-6)
		{
			double mid = (l + r) / 2.0;
			
			if (check(mid)) // >= 0
			{
				l = mid;
			}
			else
			{
				r = mid;
			}
		}
		printf("%.0lf\n",l*100); //自动四舍五入 
	}
	return 0;
}
