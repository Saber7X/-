#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		string s; cin >> s;
		map<char, int> ma;
		for (int i = 0; i < s.length(); i ++ )
		{
			ma[s[i]] ++;
		}
		
		if (ma['1'] != 0) 
		{
			cout << 1 << endl << "1" << endl;
			continue;
		}
		else if (ma['4'] != 0) 
		{
			cout << 1 << endl << "4" << endl;
			continue;
		}
		else if (ma['6'] != 0) 
		{
			cout << 1 << endl << "6" << endl;
			continue;
		}
		else if (ma['8'] != 0) 
		{
			cout << 1 << endl << "8" << endl;
			continue;
		}
		else if (ma['9'] != 0) 
		{
			cout << 1 << endl << "9" << endl;
			continue;
		}
		
		bool f = 0;
		ma.clear();
		string minn = "zz";
		cout << "2" << endl;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (ma[s[i]] != 0)
			{
				string aa = "";
				aa += s[i];
				aa += s[i];
				minn = min(aa, minn);
			}
			if (s[i] == '5' && ma['2'] != 0)
			{
				string aa = "25";
				minn = min(minn, aa);
			}
			if (s[i] == '7' && ma['2'] != 0)
			{
				string aa = "27";
				minn = min(minn, aa);
			}
			if (s[i] == '2' && ma['3'] != 0)
			{
				string aa = "32";
				minn = min(minn, aa);
			}
			
			if (s[i] == '5' && ma['3'] != 0)
			{
				string aa = "35";
				minn = min(minn, aa);
			}
			if (s[i] == '2' && ma['5'] != 0)
			{
				string aa = "52";
				minn = min(minn, aa);
			}
			if (s[i] == '7' && ma['5'] != 0)
			{
				string aa = "57";
				minn = min(minn, aa);
			}
			
			if (s[i] == '2' && ma['7'] != 0)
			{
				string aa = "72";
				minn = min(minn, aa);
			}
			if (s[i] == '5' && ma['7'] != 0)
			{
				string aa = "75";
				minn = min(minn, aa);
			}
			ma[s[i]] ++;
		}
		
		cout << minn << endl;
	}
	return 0;
}
