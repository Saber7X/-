////#include<bits/stdc++.h> 
////using namespace std;
////const int N = 1e3 + 10;
////int a[N];
////int w[N];
////int dp[N];
////int main()
////{
////	int n, m;
////	cin >> n >> m;
////	map<int, int> f;
//////	for (int i =  0;i <= cnt; i ++ )
//////	{
//////		for (int j = 0; j <= m; j ++ )
//////		{
//////			dp[i][j] = 1;
//////		}
//////	}
////	for (int i = 1; i <= n; i ++ )
////	{
////		cin >> a[i];
////		f[a[i]] ++;
////	}
////	
////	int cnt = 1;
////	for (auto i : f)
////	{
////		w[cnt ++] = i.second;
////	}
////	dp[0] = 1;
////	int sum = 0;
////	for (int i = 1; i <= cnt - 1; i ++ )
////	{
////		for (int j = m; j >= 1; j -- )
////		{
////			if (!f[j - 1])
////			{
////				f[i] += w[i];
//////				sum += f[j];
////			}
////		}
////		sum += f[1];
////	}
////	
////	cout << sum << endl;
////	return 0;
////}
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
// 
//using namespace std;
// 
//typedef long long ll;
//const int mod = 998244353;
//int a[1010];
//ll val[1010];
//ll dp[1010][1010];
// 
// 
//int main()
//{
////	freopen("in.txt", "r", stdin);
//	int n, k;
//	cin >> n >> k;
//	for(int i = 1; i <= n; ++ i)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a + 1, a + 1 + n);
//	int cnt = 1;
//	int top = 1;
//	for(int i = 2; i <= n; ++ i)
//	{
//		if(a[i] == a[i - 1])
//			cnt++;
//		else 
//		{
//			val[top++] = cnt;
//			cnt = 1;
//		}
//	}
//	val[top++] = cnt;
//	memset(dp, 0, sizeof(dp));
//	for(int i = 0; i <= 1000; ++ i)
//		dp[i][0] = 1;
//	for(int i = 1; i < top; ++ i)
//	{
//		//dp[i][1] = val[i] + dp[i - 1][1];
//		for(int j = 1; j <= k; ++ j)
//		{
//			dp[i][j] = (dp[i - 1][j - 1] * val[i] % mod + dp[i - 1][j]) % mod;
//		}
//		for(int j = 1; j <= k; ++ j)
//		{
//			printf("%03d ", dp[i][j]);
////			cout << dp[i][j] << "   ";
//		}
//		cout << endl;
//	}
//	cout << dp[top - 1][k] << endl;
//	return 0;
//}
