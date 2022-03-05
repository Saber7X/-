////#include<bits/stdc++.h>
////#define int long long
////using namespace std;
////const int N = 2e5 + 10;
//////pair<int, int> p[N];
////int num[N];
////signed main()
////{
////	int t; cin >> t;
////	while (t -- )
////	{
////		int n, a, b; 
////		scanf("%lld%lld%lld", &n, &a, &b);
////		
////		for (int i = 1; i <= n; i ++ )
////		{
////			int x; scanf("%lld", &x);
////			num[i] = x;
////		}
////		
////		
////		int minn = 1e9 + 1;
////
////		for (int k = 1; k <= n; k ++ ) //最小 
////		{
////			for (int j = k + 1; j <= n; j ++ )//最大 
////			{
////				for (int i = k + 2; i <= j - 1; i ++ )//中等 
////				{
////					if (num[i] < num[j] && num[j] > num[k])
////					{
////						minn = min(minn, a * (num[j] - num[i]) - b * (num[j] - num[k]));
////					}
////				}
////			}
////		}
////		if (minn == 1e9 + 1) printf("000");
////		else printf("%lld", minn);
////		printf("\n");
////	}
////	return 0;
////}
/////*
////000
////21
////-39
////*///		for (int k = 1; k <= n; k ++ ) //k最小的 
//////		{	
//////			for (int i = k + 1; i <= n; i ++ ) //i中等的
//////			{
////////				if (p[i].first == p[k].first) continue;
//////				for (int j = i + 1; j <= n; j ++ ) //j最大的 
//////				{
//////					if (p[i].first == p[j].first) continue;
//////					if (p[k].first == p[j].first) continue;
//////					int ans = a * (p[j].first - p[i].first) - b * (p[j].first - p[k].first);
//////					if (p[i].second < p[j].second && p[j].second < p[k].second) minn = min (ans, minn);
//////					
//////				}
//////			}
//////		}
//#include<bits/stdc++.h>
////#define int long long
//using namespace std;
//const int N = 2e5 + 10;
//
//inline int quick_read() noexcept {
//	int x = 0, f = 1;
//	char ch;
//	while (! isdigit (ch = getchar()))
//		if (ch == '-')
//			f = -f;
//	x = ch - '0';
//	while (isdigit (ch = getchar()))
//		x = (x << 3) + (x << 1) + ch - '0';
//	return x * f;
//}
//
//inline void quick_write(int x) {
//	if (x == 0)
//		putchar('0');
//	else {
//		int a[20] = {0};
//		int top = 0;
//		while (x) {
//			int temp = x % 10;
//			a[++ top] = temp;
//			x /= 10;
//		}
//		for (int i = top; i >= 1; i --)
//			putchar(a[i] + '0');
//	}
//}
//
//signed main()
//{
//	int t; t = quick_read();
//	while (t -- )
//	{
//		int n, a, b; 
//		n = quick_read();
//		a = quick_read();
//		b = quick_read();
//		pair<int, int> p[N];
//		for (int i = 1; i <= n; i ++ )
//		{
//			int x;
//			x = quick_read();
//			p[i].first = x;
//			p[i].second = i;
//		}
//		sort(p + 1, p + 1 + n);
//		int minn = 1e9 + 10;
//		for (int k = 1; k <= n; k ++ ) //k最小的 
//		{
////			if (p[i].first == p[j].first)  continue;
//			
//			for (int i = k + 1; i <= n; i ++ ) //i中等的
//			{
//				if (p[i].first == p[k].first) continue;
//				for (int j = i + 1; j <= n; j ++ ) //j最大的 
//				{
//					if (p[i].first == p[j].first) continue;
//					int ans = a * (p[j].first - p[i].first) - b * (p[j].first - p[k].first);
//					if (p[i].second < p[j].second && p[j].second < p[k].second) minn = min (ans, minn);
//					
//				}
//			}
//		}
//		if (minn == 1e9 + 10) printf("0 0 0\n");
//		else printf("%d\n", minn);
//	}
//	return 0;
//}

//测试 
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
//pair<int, int> p[N];
int num[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, a, b; 
		scanf("%lld%lld%lld", &n, &a, &b);
		
		for (int i = 1; i <= n; i ++ )
		{
			int x; scanf("%lld", &x);
			num[i] = x;
		}
		
		
		int minn = 1e9 + 1;

		for (int i = 1; i <= n; i ++ ) 
		{
			for (int j = i + 1; j <= n; j ++ )
			{
				for (int k = j + 1; k <= n; k ++ )
				{
					if (num[i] < num[j] && num[j] > num[k])
					{
						minn = min(minn, a * (num[j] - num[i]) - b * (num[j] - num[k]));
					}
				}
			}
		}
		if (minn == 1e9 + 1) printf("000");
		else printf("%lld", minn);
		printf("\n");
	}
	return 0;
}
/*
000
21
-39
*///		for (int k = 1; k <= n; k ++ ) //k最小的 
//		{	
//			for (int i = k + 1; i <= n; i ++ ) //i中等的
//			{
////				if (p[i].first == p[k].first) continue;
//				for (int j = i + 1; j <= n; j ++ ) //j最大的 
//				{
//					if (p[i].first == p[j].first) continue;
//					if (p[k].first == p[j].first) continue;
//					int ans = a * (p[j].first - p[i].first) - b * (p[j].first - p[k].first);
//					if (p[i].second < p[j].second && p[j].second < p[k].second) minn = min (ans, minn);
//					
//				}
//			}
//		}
