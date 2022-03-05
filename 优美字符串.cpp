#include<bits/stdc++.h> 
using namespace std;
//const i
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		string s;
		cin >> s;
		int len = s.length();
		for (int i = 0; i < s.length() - 1; i ++ )
		{
			if (s[i] == s[i + 1]) len ++;
		}
		cout << len << endl;
	}
	return 0;
}
