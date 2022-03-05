#include<bits/stdc++.h>
using namespace std;
int main()
{
	string head;
	int n, k;
	cin >> head >> n >> k;
	vector<pair<string, int>> v;
	map<string, int> ma1; //编号对应节点 
	map<string, string> ma2; //编号对应下个编号 
	for (int i = 1; i <= n ; i++) 
	{
		string a, b;
		int x;
		cin >> a >> x >> b;
		ma1[a] = x;
		ma2[a] = b;
	}
	string hh = head;
	while (1)
	{
		if (hh == "-1") break;
		v.push_back({hh, ma1[hh]});
		hh = ma2[hh];
	}

	int x = 0;
	while (1 && k != 0)
	{
		reverse(v.begin() + x, v.begin() + x + k);
		x += k;
		if (x + k > v.size()) break;
	}
	for (int i = 0; i < v.size(); i ++ )
	{
		cout << v[i].first << " " << v[i].second;
		if (i != v.size() - 1)
		{
			cout << " " << v[i + 1].first;
			cout << endl;
		}
	}
	cout << " " << -1;
	return 0;
}
/*
00100 6 2
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218

*/
