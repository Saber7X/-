//#include<bits/stdc++.h>
//using namespace std;
//const int N = 205;
//
//struct name{
//	map <char, int> res;
//}num[100];
//
//int main()
//{
//	int c = 1;
//	int T; cin >> T;
//	while(T -- )
//	{
//		
//		int n; cin >> n;
//		if(c!=1)
//		{
//			for(int i = 1; i <= n; i ++ )
//			{
//				num[i].res.clear();
//			}
//		}
//		c = 1;
//		string s; 
//		for(int i = 1; i <= n; i ++ )
//		{
//			cin >> s;
//			for(int j = 0; j < s.length(); j ++ )
//			{
//				num[i].res[s[i]] ++;
//			}
//		}
//		int f[N][N];
//		memset(f, -1, sizeof f);
//		//f[0][1] = 0;
//		int a[N][N] = {0};
//		int b[N][N] = {0};
//		int c[N][N] = {0};
//		int d[N][N] = {0};
//		int e[N][N] = {0};
//		memset(a, 0, sizeof a);
//		memset(b, 0, sizeof b);
//		memset(c, 0, sizeof c);
//		memset(d, 0, sizeof d);
//		memset(e, 0, sizeof e);
//		int ans = -0x3f;
//		for(int i = 1; i <= n; i ++ )
//		{
//			for(int j = 1; j < i; j ++ )
//			{
////				if(f[i][j] == -1)
////				{
////					continue;
////				}
//				f[i][j] = f[i - 1][j];
//				a[i][j] = a[i - 1][j];
//				b[i][j] = b[i - 1][j];
//				c[i][j] = c[i - 1][j];
//				d[i][j] = d[i - 1][j];
//				e[i][j] = e[i - 1][j];
//				
//				
//				bool t = 0;
//				int aa, bb, cc, dd, ee, sum = 0;
//				for(char k = 'a'; k <= 'e'; k ++ )
//				{
//					if(k == 'a') aa = a[i - 1][j - 1] + num[i].res[k], sum += aa;
//					if(k == 'b') bb = b[i - 1][j - 1] + num[i].res[k], sum += bb;
//					if(k == 'c') cc = c[i - 1][j - 1] + num[i].res[k], sum += cc;
//					if(k == 'd') dd = d[i - 1][j - 1] + num[i].res[k], sum += dd;
//					if(k == 'e') ee = e[i - 1][j - 1] + num[i].res[k], sum += ee;	
//				}
//				if(aa > sum - aa) t = 1;
//				if(bb > sum - bb) t = 1;
//				if(cc > sum - cc) t = 1;
//				if(dd > sum - dd) t = 1;
//				if(ee > sum - ee) t = 1;
//				if(t == 0)
//				{
//					a[i][j] = aa;
//					b[i][j] = bb;
//					c[i][j] = cc;
//					d[i][j] = dd;
//					e[i][j] = ee;
//				}
//				if(t == 1)
//				{
//					if(f[i - 1][j - 1] + 1 <= f[i][j])
//					{
//						continue;
//					}
//					f[i][j] = f[i - 1][j - 1] + 1;
//					a[i][j] = aa;
//					b[i][j] = bb;
//					c[i][j] = cc;
//					d[i][j] = dd;
//					e[i][j] = ee;
//				}
//				ans = max(ans, f[i][j]);
//			}
//		}
//		
//		cout <<"ans = "<< ans << endl;
//		
//		
//	}
//	return 0;
//}
