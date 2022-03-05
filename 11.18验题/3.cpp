//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//const int N = 2e5 + 10;
//int num[N], sum[N], sum1[N];
//
//signed main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i ++ )
//	{
//		cin >> num[i];
//		sum[i] = sum[i - 1] + num[i];
//	}
//	int cnt = 1;
//	for (int i = n; i >= 1; i -- )
//	{
//		sum1[cnt] = sum1[cnt - 1] + num[i];
//		cnt ++;
//	}
//	for (int i = 1; i <= m; i ++ )
//	{
//		int ans;
//		int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
//		if (l2 < l1 && r2 >= l1 && r2 <= r1)
//		{
////			cout << "1 :         ";
////			ans = sum[l1 - 1] - sum[l2 - 1] + sum1[r2] - sum1[l1 - 1];
//			ans = sum[l1 - 1] - sum[l2 - 1] + sum[r1] - sum[r1 - (r2 - l1) - 1];
//		}
//		else if (l2 >= l1 && l2 <=r1 && r2 > r1)
//		{
////			ans = sum[r2] - sum[r1] + sum1[r1] - sum1[l2 - 1];
//			ans = sum[l1 + (r1 - l2)] - sum[l1 - 1] + sum[r2] - sum[r1];
////			cout << "2 :          ";
//		}
//		else if (l2 >= l1 && r2 <= r1)
//		{
////			ans = sum1[r2] - sum1[l2 - 1];
//			ans = sum[r1 - (l2 - l1)] - sum[l1 + (r1 - r2) - 1];
////			cout << "3 :          ";
//		}
////		else if (l2 > l1 && r2 > r1)
////		{
////			ans = sum[l1 - 1] - sum[l2 - 1] + sum[r2] - sum[r1] + sum1[r1] - sum1[l1 - 1];
////		}
//		else
//		{
//			ans = sum[r2] - sum[l2 - 1];
////			cout << "4 :          ";
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}


#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int num[N], sum[N];

signed main()
{
	int n, m; cin >> n >> m;
	
	for (int i = 1; i <= n; i ++ )
	{
		cin >> num[i];
		sum[i] = sum[i - 1] + num[i];
	}
	for (int i = 1; i <= m; i ++ )
	{
		int ans;
		int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
		
		if (l2 < l1 && r2 >= l1 && r2 <= r1) ans = sum[l1 - 1] - sum[l2 - 1] + sum[r1] - sum[r1 - (r2 - l1) - 1];
		else if (l2 >= l1 && l2 <=r1 && r2 > r1) ans = sum[l1 + (r1 - l2)] - sum[l1 - 1] + sum[r2] - sum[r1];
		else if (l2 >= l1 && r2 <= r1) ans = sum[r1 - (l2 - l1)] - sum[l1 + (r1 - r2) - 1];
		else ans = sum[r2] - sum[l2 - 1];
		
		cout << ans << endl;
	}
	return 0;
}
