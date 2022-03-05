#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	map<string, int> f;
	f["one"] = 1;
	f["two"] = 2;
	f["three"] = 3;
	f["four"] = 4;
	f["five"] = 5;
	f["six"] = 6;
	f["seven"] = 7;
	f["eight"] = 8;
	f["nine"] = 9;
	f["ten"] = 10;
	f["eleven"] = 11;
	f["twelve"] = 12;
	f["thirteen"] = 13;
	f["fourteen"] = 14;
	f["fifteen"] = 15;
	f["sixteen"] = 16;
	f["seventeen"] = 17;
	f["eighteen"] = 18;
	f["nineteen"] = 19;
	f["a"] = 1;
	f["both"] = 1;
	f["another"] = 1;
	f["first"] = 1;
	f["second"] = 1;
	f["third"] = 1;
	
	vector<int> ans;
	while (cin >> s)
	{
		if (s == ".")
		{
			break;
		}
		if (f[s])
		{
			ans.push_back(f[s] * f[s] % 100);
		}
	}
	bool ff = 0;
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i ++ )
	{
		ff = 1;
		if (ans[i] <= 9 && i != 0)
		{
			cout << "0";
		}
		cout << ans[i];
	}
	if (!ff) cout << 0;
	return 0;
}
