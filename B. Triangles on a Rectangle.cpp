//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//const int N = 2e5 + 10;
//int a[N];
//signed  main()
//{
//	int t; 
//	cin >> t;
//	while (t -- )
//	{
//		int w, h;
//		cin >> w >> h;
//		int n;
//		int ans = 0;
//		
//		cin >> n;
//		for (int i = 1; i <= n; i ++ ) cin >> a[i];
//		ans = max(ans, (a[n] - a[1]) * h);
//		
//		cin >> n;
//		for (int i = 1; i <= n; i ++ ) cin >> a[i];
//		ans = max(ans, (a[n] - a[1]) * h);
//		
//		cin >> n;
//		for (int i = 1; i <= n; i ++ ) cin >> a[i];
//		ans = max(ans, (a[n] - a[1]) * w);
//		
//		cin >> n;
//		for (int i = 1; i <= n; i ++ ) cin >> a[i];
//		ans = max(ans, (a[n] - a[1]) * w);
//		
//		cout << ans << endl;
//	
//	}
//	return 0;
//}

#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 10;
int a[N], b[N], c[N], d[N];
signed main()
{
	int t; 
	cin >>t;
	
	while (t -- )
	{
		int w, h; 
		scanf("%lld%lld", &w, &h);
		
		int a1, b1, c1, d1;
		
		int aa, bb, cc, dd;
		
		scanf("%lld", &a1);
		for (int i = 1; i <= a1; i ++ ) scanf("%lld", &a[i]);
		aa = a[a1] - a[1];
		
		
		scanf("%lld", &b1);
		for (int i = 1; i <= b1; i ++ ) scanf("%lld", &b[i]);
		bb = b[b1] - b[1];
		
		scanf("%lld", &c1);
		for (int i = 1; i <= c1; i ++ ) scanf("%lld", &c[i]);
		cc = c[c1] - c[1];		
		
		scanf("%lld", &d1);
		for (int i = 1; i <= d1; i ++ ) scanf("%lld", &d[i]);
		dd = d[d1] - d[1];
		
		
		int ans = 0;
		
		ans = max(ans, aa * h);
		ans = max(ans, bb * h);
		ans = max(ans, cc * w);
		ans = max(ans, dd * w);
		
		printf("%lld\n", ans);
	}
	return 0;
 } 
 
 /*
 3 4
2 1 2
2 1 2
2 2 3
2 1 3
6
*/
