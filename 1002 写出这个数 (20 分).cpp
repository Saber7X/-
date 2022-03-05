#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	int sum = 0;
	
	for (int i = 0; i < s.length(); i ++ )
	{
		sum += (s[i] - '0');
	}
	
	map <char, string> ma;
	ma['0'] = "ling";
	ma['1'] = "yi";
	ma['2'] = "er";
	ma['3'] = "san";
	ma['4'] = "si";
	ma['5'] = "wu";
	ma['6'] = "liu";
	ma['7'] = "qi";
	ma['8'] = "ba";
	ma['9'] = "jiu";
	
	string ss = to_string(sum);
	
	for (int i = 0; i < ss.length() - 1; i ++ )
	{
		cout << ma[ss[i]] << " ";
	}
	
	cout << ma[ss[ss.length() - 1]];
	
	return 0;
}
