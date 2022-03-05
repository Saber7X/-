#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	getchar();
	while (t -- )
	{
		string s; 
		getline(cin, s);
		int len = s.length();
		if (s[0] == 'n' && s[1] == 'o' && s[2] == 't' && (s[3] == ' ' || len == 3)) cout << "Real Fancy" << endl;
		else if (s[len - 4] == ' ' && s[len - 3] == 'n' && s[len - 2] == 'o' && s[len - 1] == 't') cout << "Real Fancy" << endl;
		else
		{
//			int f = 1;
//			for (int i = 0; i < s.length(); i ++ )
//			{
//				if (s[i] == ' ' && s[i + 1] == 'n' && s[i + 2] == 'o' && s[i + 3] == 't' && s[i + 4] == ' ')
//				{
//					f = 0;
//					cout << "Real Fancy" << endl;
//					break;
//				}
//			}
//			if (f == 1) 
//			{
//				cout << "regularly fancy" << endl;
//			}
			int f = s.find(" not ");
//			cout << f <<"  ";
			if (f != -1) cout << "Real Fancy" << endl;
			else cout << "regularly fancy" << endl;
		}
		
	}
	return 0;
}
