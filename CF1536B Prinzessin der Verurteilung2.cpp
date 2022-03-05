#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}
int main()
{
	vector<string> flag;
	
	for (int i = 0; i < 26; i ++ )
	{
		string s = "";
		int c = 'a' + i;
		s.push_back(char(c));
		flag.push_back(s);
		
		for (int j = 0; j < 26; j ++ )
		{
			char cc = 'a' + j;
			s.push_back(char(cc));
			flag.push_back(s);
			
			for (int k = 0; k < 26; k ++ )
			{
				char ccc = 'a' + k;
				s.push_back(char(ccc));
				flag.push_back(s);
				s.pop_back();
			}
			s.pop_back();
		}
		s.pop_back();
	}
	
	sort(flag.begin(), flag.end(), cmp);
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		string ss; cin >> ss;
		
		for (auto i : flag)
		{
			if (ss.find(i) == -1)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
