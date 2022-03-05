#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<string> s;
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		string x; cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	return 0;
}
