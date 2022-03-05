#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans[70000];
int cnt = 1;
map<int, int> flag;
signed main()
{
	int t;
	cin >> t;
	
	for (int i = 1; i <= 32591; i ++ )
	{
		if (!flag[i * i]) ans[cnt ++] = i * i;
		flag[i * i] = i;
		if (!flag[i * i * i]) ans[cnt ++] = i * i * i;
		flag[i * i] = i;
		flag[i * i * i] = i;
	}

	sort(ans + 1, ans + 1 + cnt);
	while (t -- )
	{
		int n;
		cin >> n;
		int f = upper_bound(ans + 1, ans + 1 + cnt, n) - ans;
		cout << f - 1 - 1<< endl;
	}
	return 0;
}
