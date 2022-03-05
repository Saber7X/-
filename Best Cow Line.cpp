#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n; cin >> n;
	string s = "";
	for (int i= 1; i <= n; i ++ )
	{
		char c; cin >> c;
		s.push_back(c);
	}
	
	int l = 0, r = n - 1;
	string ans = "";
	while (l <= r)
	{
		if (s[l] < s[r])
		{
			ans.push_back(s[l]);
			l++;
		}
		else if (s[l] == s[r])
		{
			string s1 = s.substr(l, r - l + 1);
			string s2 = s1;
			reverse(s2.begin(), s2.end());
			if (s1 >= s2) 
			{
				ans.push_back(s[r]);
				r --;
			}
			else
			{
				ans.push_back(s[l]);
				l ++;
			}
		}
		else if (s[l] > s[r])
		{
			ans.push_back(s[r]);
			r --;
		}
	}
	for (int i = 0; i < s.length(); i ++ )
	{
		cout << ans[i];
		if ((i + 1) % 80 == 0 && i != s.length() - 1) cout << endl;
	}
	
	return 0;
}
