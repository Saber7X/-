#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int ans[N][N];
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		memset(ans, -1, sizeof ans);
		string s;int n;
		cin >> n;
		cin >> s;
		
		int a = 0, b = 0;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == '1') a ++;
			if (s[i] == '2') b ++;
		} 
		if (b <= 2 && b != 0) 
		{
			cout << "NO" << endl;
			continue;
		}
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = i + 1; j <= n; j ++ )
			{
				ans[i][j] = 2; //Æ½¾Ö 
				ans[j][i] = 2; //
			}
		}
		for (int i = 1; i <= n; i ++ ) 
		{
			if (s[i - 1] == '2')
			{
				for (int j = 1; j <= n; j ++ )
				{
					if (i != j && s[j - 1] == '2' && ans[i][j] == 2)
					{
						ans[i][j] = 1;
						ans[j][i] = 0;
						break;
					}
				}
			}
		}
		cout << "YES" << endl;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = 1; j <= n; j ++ )
			{
				if (ans[i][j] == 2) cout << "=";
				if (ans[i][j] == 1) cout << "+";
				if (ans[i][j] == -1) cout << "X";
				if (ans[i][j] == 0) cout << "-";
			}
			cout << endl;
		}
	}
	return 0;
}
