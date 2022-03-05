#include<bits/stdc++.h> 
using namespace std;
int n;
char c;
string s;

void solve()
{
	bool f = 0;
	cin >> n;
	getchar();
	cin >> c >> s;
	
	for (int i = 0; i < n; i ++ )
	{
		if (s[i] != c) {f = 1; break;}
	}
	
	if (!f)
	{
		cout << 0 << endl; 
		return;
	}
	for (int i = 2; i <= n; i ++ )
	{
		f = 0;
		for (int j = i; j <= n; j += i)
		{
			if (s[j - 1] != c)
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
		{
			cout << 1 << endl << i << endl;
			return;
		}
	}
	cout << 2 << endl << n << " " << n - 1 << endl;
}

int main()
{
	int t; cin >> t;
	int cnt = 0;
	int sum = 0;
	
	while (t -- )
	{
		solve();
		
	}
	return 0;
}
