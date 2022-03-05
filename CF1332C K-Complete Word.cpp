#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int ans = 0; 
		int n, k;
		char s[200005];
		cin >> n >> k;
		scanf("%s", s + 1);
		int flag = n / k;//小区间个数 
		bool st = false;
		if(k % 2 == 0) n = k/2;
		if(k % 2 != 0) n = k/2 + 1, st = true;
		for(int i = 1; i <= n; i ++ )//n个位置 
		{
			int cnt = 0;
			map<char, int> res;
			for(int j = 1; j <= flag; j ++ )//k个区间 
			{
				if(st && i == n)
				{
					res[s[(j - 1) * k + i]] ++;
				}
				else 
				{
					res[s[(j - 1) * k + i]] ++;
					res[s[j * k - i + 1]] ++;////////
				}
				
			}
			for(char j = 'a'; j <= 'z'; j ++ )
			{
				cnt = max (cnt, res[j]);
			}
			if(st && i == n)  ans = ans + flag - cnt;
			else ans = ans + (flag * 2 - cnt);
		}
		cout << ans << endl;
	}
	return 0;
}
