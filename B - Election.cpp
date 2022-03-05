#include<bits/stdc++.h>
using namespace std;

map<string, int> cnt;
set<string> ff;

int main()
{
	int n; 
	cin >> n;
	
	for (int i = 1; i <= n; i ++ )
	{
		string s; 
		cin >> s; 
		
		cnt[s] ++;
		ff.insert(s);
	}
//	int maxn = 0;
//	string ans;
//	for (auto i : ff)
//	{
//		if (cnt[i] > maxn)
//		{
//			maxn = cnt[i];
//			ans = i;
//		}
//	}
//	cout << ans;
	return 0;
}
