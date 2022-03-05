#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, a, b;
		cin >> n >> a >> b;
		int ans[n + 10];
		memset(ans, -1, sizeof ans);
		ans[1] = a;
		ans[n] = b;
		unordered_map<int, int> res;
		
		res[a] = 1;
		res[b] = 1;
		int cnt = 2;
		for (int i = n; i >= 1; i -- )
		{
			if (cnt > n/2) break;
			if (ans[cnt] == -1 && !res[i] && i > a)
			{
				ans[cnt] = i;
				res[cnt] = 1;
				cnt ++;
			}
		}
		
		cnt = n / 2 + 1;
		 
		for (int i = 1; i <= n; i ++ )
		{
			if (res[i] == 0 && i < b)
			{
				ans[cnt] = i;
				res[cnt] = 1;
				cnt ++;
			}
		}
		bool f = 0;
		for (int i =1 ;i <= n; i ++ )
		{
			if (ans[i] == -1)
			{
				f = 1;
				break;
			}
		}
//		if (f) cout << "-1" << endl;
//		else
//		{
			for (int i = 1; i <= n; i ++ )
			{
				cout << ans[i]<<" ";
			}
			cout << endl;
//		}
	}
	return 0;
}
