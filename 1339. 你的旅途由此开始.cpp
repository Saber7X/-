#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char, int> flag;
	map<int, char> flag2;
	char f = 'A';
	for (int i = 1; i <= 26; i ++ )
	{
		flag2[i] = f;
		flag[f] = i;
		f ++;
	}
	string s, t; 
	cin >> s >> t;
	int sum = 1; 
	for (int i = 0; i < s.length(); i ++ )
	{
		sum *= flag[s[i]];
	}
	sum %= 47;
	int ans = 1;
	for (int i = 0; i < t.length(); i ++ )
	{
		ans *= flag[t[i]];
	}
	ans %= 47;
	if (ans == sum) cout << "GO";
	else cout << "STAY" << endl;
	return 0;
}
