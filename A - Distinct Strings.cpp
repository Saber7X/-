#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	map<char, int> x;
	int cnt = 0;
	for (int i = 0; i < s.length(); i ++ )
	{
		if (x[s[i]] == 0) cnt ++;
		x[s[i]] ++;
	}
	if (cnt == 3) cout << "6" << endl;
	if (cnt == 2) cout << "3" << endl;
	if (cnt == 1) cout << "1" << endl;
	return 0;
}
