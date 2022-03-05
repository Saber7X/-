#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		string s; cin >> s;
		char minn = 'z';
		int mm;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] <= minn) 
			{
				minn = s[i];
				mm = i;
			}
		}
		cout << minn << " ";
		for (int i = 0; i < s.length() ; i ++)
		{
			if (i != mm) cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
