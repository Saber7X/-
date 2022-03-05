#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	string s, m;
	m = " qiao ben zhong.";
	int len = 0;
	for (int k = 0; k < n; k ++ )
	{
	
		bool t = 0;
		
		
		if (k == 0) getchar();
		
		getline(cin, s);
		
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == ',' && t == 0)
			{
				if (s[i - 1] != 'g' || s[i - 2] != 'n' || s[i - 3] != 'o')
				{
					t = 1;
					cout << "Skipped";
					break;
				}
			}
			
			if (t == 1) break;
			
			if (s[i] == '.' && t == 0)
			{
				if (s[i - 1] != 'g' || s[i - 2] != 'n' || s[i - 3] != 'o')
				{
					t = 1;
					cout << "Skipped";
					break;
				}
			}
			else
			{
				len = 0;
				int cnt = 3;
				int j = i;
				while (1)
				{
					if (cnt == 0) break;
					
					if (s[j] == ' ') cnt --;
					
					j --;
					len ++;
				}
			}
		}
		if (t == 0)
		{
			for (int i = 0; i < s.length() - len; i ++ )
			{
				cout << s[i];
			}
			cout << m;
		}
		if (k != n - 1) cout << endl;
	}
	return 0;
}
