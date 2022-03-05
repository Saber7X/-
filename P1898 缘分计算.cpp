#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int st; cin >> st;
	int j = 0;
	
	map<char, int> mm;
	for (char i = 'A'; i <= 'Z'; i ++ )
	{
		mm[i] = st + j;
		j ++;
	}
	
	string ss="";
	for (int i = 0; i < s.length(); i ++ )
	{
		string xx ="";
		int x = mm[s[i]];
		while (x > 0)
		{
			int c = x % 10 ;
			xx += (c + '0');
			x /= 10;
		}
		
		reverse(xx.begin(), xx.end());
		ss += xx;
	}
	
	vector<char> f;
	for (int i = 0; i < ss.length(); i ++ )
	{
		f.push_back(ss[i]);
	}
	
	while (1)
	{
		if ((f[0] == '1' && f[1] == '0' && f[2] == '0' && f.size() == 3) || f.size() == 2) break;
		vector <int> ff;
		for (int i = 0; i < f.size() - 1; i ++ )
		{
			int x = f[i] - '0';
			int y = f[i + 1] - '0';
			int d = x + y;
			ff.push_back(d % 10 + '0');
		}
		f.clear();
		for (int i = 0; i < ff.size(); i ++ )
		{
			f.push_back(ff[i]);
		}
	}
	
	for (int i = 0; i < f.size(); i ++ )
	{
		
		cout << f[i];
	}
	return 0;
}
//	while (f.size() > 2)
//	{
//		vector <int> ff;
//		while (f.size() > 0)
//		{
//			if (f.size() == 1)
//			{
//				int x = f[f.size() - 1] - '0';
//				f.pop_back();
//				ff.push_back(x + '0');
//				break;
//			}
//			int x = f[f.size() - 1] - '0';
//			int y = f[f.size() - 2] - '0';
//			f.pop_back();
//			f.pop_back();
//			int d = x + y;
//			cout << x << y << endl;
//			ff.push_back(d % 10 + '0');
//		}
//		for (int i = ff.size() - 1; i >= 0; i -- )
//		{
//			f.push_back(ff[i]);
//		}
//	}
//
