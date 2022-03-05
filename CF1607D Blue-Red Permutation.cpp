#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int num[N];
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		vector<int> a, b;
		int n; string s;
		cin >> n;
		for (int i = 1; i <= n; i ++ ) scanf("%d", &num[i]);
		cin >> s;
		for (int i = 1; i <= n; i ++ )
		{
			if (s[i - 1] == 'R') a.push_back(num[i]);
			if (s[i - 1] == 'B') b.push_back(num[i]);
		}
		sort (a.begin(), a.end(), cmp);
		sort (b.begin(), b.end());
		bool f = false;
		for (int i = 0; i < b.size(); i ++ )
		{
			if (b[i] < i + 1) 
			{
				f = 1;
				break;
			}
		}
		if (f)
		{
			puts("NO");
			continue;
		}
		for (int i = 0; i < a.size(); i ++ )
		{
			if (a[i] > n - i) 
			{
				f = 1;
				break;
			}
		}
		if (!f) puts("YES");
		else puts("NO");
	}
	return 0;
}
