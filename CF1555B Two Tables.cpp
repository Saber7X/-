//#include<bits/stdc++.h> 
//using namespace std;
//int main()
//{
//	int t; cin >> t;
//	int n, m;
//	int x1, y1, x2, y2;
//	int w, h;
//	while (t -- )
//	{
//		cin >> n >> m >> x1 >> y1 >> x2 >> y2 >> w >> h;
//		int ans = 999999999;
//		int a = y2 - y1, b = x2 - x1;
//		
//			if (m - y2 >= h || y1 >= h) ans = 0;
//			else
//			{
//				int maxn = max (m - y2, y1);
//				ans = min(ans, h - maxn);
//			}
//			
//			if (n - b >= w && m >= h)
//			{
//				if (n - x2 >= w || x1 >= w) ans = 0;
//				else
//				{
//					int maxn = max (n - x2, x1);
//					ans = min(ans, w - maxn);
//				}
//			}
//			
//			if (ans == 999999999) printf("         -1\n");
//			else printf("                   %d\n", ans);
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, x1, y1, x2, y2, a1, b1, a2, b2;
	int t; cin >> t;
	while (t -- )
	{
		cin >> a >> b >> x1 >> y1 >> x2 >> y2 >> a2 >> b2;
		a1 = x2 - x1, b1 = y2 - y1;
		if (a1 + a2 > a && b1 + b2 > b) cout << "-1\n";
		else
		{
			int ans = 0x3f3f3f3f;
			if (a1 + a2 <= a)
			{
				if (x1 >= a2 || x2 + a2 <= a) ans = 0;
				else 
				{
					ans = min(ans, min(a2 - x1, x2 + a2 - a));//看哪个要移动的少 
				}
			}
			if (b1 + b2 <= b) 
			{
				if (y1 >= b2 || y2 + b2 <= b) ans = 0;
				else ans = min(ans, min(b2 - y1, y2 + b2 - b));
			}
			cout << ans << ".000000000" << endl;
		}
	}
	
	return 0;
}
