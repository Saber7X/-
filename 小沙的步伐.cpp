#include<bits/stdc++.h> 
using namespace std;
int main()
{
	string s;
	cin >> s;
	map<char, int> ma;
	for (int i = 0; i < s.length(); i ++ )
	{
		if (s[i] == '5')
		{
			continue;
		}
		ma[s[i]] ++;
		ma['5'] ++;
	}
	for (char i = '1'; i <= '9'; i ++ )
	{
		cout << ma[i] << " ";
	}
	return 0;
}
