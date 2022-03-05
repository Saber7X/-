#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<string>  v;
	for (int i = 1; i <= n; i ++ )
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	map<string, int> ma;
	for (int i = 1; i <= m; i ++ )
	{
		string s;
		cin >> s;
		ma[s] = 1;
	}
 	for (auto i : v)
 	{
 		if (ma[i]) cout << "Yes" << endl;
 		else cout << "No" << endl;
	 }
	return 0;
}

/*
3 3
tokyo okachi ueno
tokyo akiba ueno

*/
