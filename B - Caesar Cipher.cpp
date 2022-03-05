#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, t;
	cin >> s;
	cin >> t;
	
	int f = s[0] - t[0];
//	if (s[0] > t[0]) f -= 26;
// 	cout << f << endl;
	
	for (int i = 1; i < s.length(); i ++ )
	{
	    int flag = s[i] - t[i];
//	    if (s[i] > t[i]) flag -= 26;
	   // cout << flag << " ";
		if (flag != f)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}

