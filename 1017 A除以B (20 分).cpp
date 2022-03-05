#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int b;
	cin >> a >> b;
	string ans = "";
	int f = 0;
	for (int i = 0; i < a.length(); i ++ )
	{
		int x = a[i] - '0' + f;
		ans += (x / b + '0');
		f = x % b * 10;
	}
	int c = 0;
	for (int i = 0; i < ans.length(); i ++ )
	{
		if (ans[i] == '0' && c == 0)
		{
			continue;
		}
		else
		{
			c = 1;
			cout << ans[i];
		}
	}
	if (c == 0) cout << "0";
	cout << " " << f/10;
	return 0;
}

