#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	string s = to_string(a * b);
	reverse(s.begin(), s.end());
	int i = 0;
	for (i = 0; i < s.length(); i ++ ) 
	{
		if (s[i] != '0') break;
	}
	for (i; i < s.length(); i ++ ) cout << s[i];
	return 0;
}
