#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<string> s;
	for (int i = 1; i <= n; i ++ )
	{
		string ss;
		cin >> ss;
		s.insert(ss);
	}
	cout << s.size() << endl;
	return 0;
}
