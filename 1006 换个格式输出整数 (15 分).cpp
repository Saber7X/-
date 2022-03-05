#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	string s; cin >> s;
	if (s.length() == 3)
	{
		for (int i = 1; i <= (s[0] - '0'); i ++ )
		{
			cout << "B";
		}
		for (int i = 1; i <= (s[1] - '0'); i ++ )
		{
			cout << "S";
		}
		for (int i = 1; i <= (s[2] - '0'); i ++ )
		{
			cout << i;
		}
	}
	if (s.length() == 2)
	{
		for (int i = 1; i <= (s[0] - '0'); i ++ )
		{
			cout << "S";
		}
		for (int i = 1; i <= (s[1] - '0'); i ++ )
		{
			cout << i;
		}
	}
	if (s.length() == 1)
	{
		for (int i = 1; i <= (s[0] - '0'); i ++ )
		{
			cout << i;
		}
	}
	return 0;
}
