#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin >> t;
	while (t -- )
	{
		vector<pair<int, int> > v;
		int n; cin >> n;
		int a[n + 10];
		
		for (int i= 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		int l = 1, r = 1;
		for (int i = 1; i < n; i ++ )
		{
			if (a[i] <= a[i + 1])
			{
				r = i + 1;
			}
			else
			{
				if (r - l > 1)
				{
					v.push_back({l, r});
					l = i + 1;
				}
			}
		}
		if (r - l > 1) v.push_back({l, r});
		vector<pair<int, int> > ans;
		int maxn = 0;
		for (auto i : v)
		{
			int l = i.first, r = i.second;
			for (int j = l; j <= r; j ++ )
			{
				for (int k = j + 1; k <= r; k ++ )
				{
					if (a[k] - a[j] > maxn)
					{
						ans.clear();
						maxn = a[k] - a[j];
						ans.push_back({j, k});
					}
					else if (a[k] - a[j] == maxn)
					{
						ans.push_back({j, k});
					}
				}
			}
		}
		for (auto i : ans)
		{
			cout << i.first << " " << i.second << " ";
		}
		cout << endl;
	}
	return 0;
}
