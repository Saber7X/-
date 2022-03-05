#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, mod = 128, mod1 = 1e9 + 7;
int f[N], dp[N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, m;
		unordered_map<string, int> ma;
		cin >> n >> m;
		for (int i = 1; i <= m; i ++ )
		{
			string a, b;
			cin >> a >> b;
			ma[b] ++;
		}
		string s;
		cin >> s;
		s = " " + s;
		memset(f, 0, sizeof f);
		memset(dp, 0, sizeof dp);
		
		f[0] = 1;
		dp[0] = 1;
		bool tt = 0;
//		cout << s << endl;
		for (int i = 1; i < s.length(); i ++ )
		{
			for (int j = 1; j <= min(5, i); j ++ )
			{
				string flag = s.substr(i, j);
				cout << flag<<endl;
				if (ma[flag]) //´æÔÚ 
				{
					f[i] = f[i - j] * ma[flag] + f[i - j];
					
//					if (f[i] > mod)
//					{
//						f[i] %= mod;
//						tt = 1;
//					}
//					f[i] ;
//					if (f[i] > mod)
//					{
//						f[i] %= mod;
//						tt = 1;
//					}

				}
			}
		}
		if (f[n] == 0) cout << "nonono" << endl;
		else if (f[n] == 1) cout << "happymorsecode" << endl;
		else cout << "puppymousecat " << f[n] << endl;
	}
	return 0;
 } 
