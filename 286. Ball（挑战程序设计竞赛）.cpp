#include<bits/stdc++.h>
using namespace std;
vector<int>res;
bool f = 0;


void dfs(string a, string b, int u)
{
	if (f) return;
	if (u == 10)
	{
		int ife = 0;
		if (a.length() + b.length() == 10)
		{
			for (int i = 1; i < a.length(); i ++ )
			{
				if (a[i] <= a[i - 1]) 
				{
					ife = 1;
					break;
				}
			}
			
			for (int i = 1; i < b.length(); i ++ )
			{
				if (b[i] <= b[i - 1]) 
				{
					ife = 1;
					break;
				}
			}
			if (!ife) 
			{
				f = 1;
//				cout << a << " " << b << endl;
			}
		}
		return;
	}
	int x = res[u];
	char c = x + '0';
//	cout << c << endl;
	for (int i = 1; i <= 2; i ++ )
	{
		if (f) return;
		if (i == 1 && c > a[a.length() - 1])
		{
			dfs(a + c, b, u + 1);
		}
		if (f) return;
		if (i == 2 && c > b[b.length() - 1])
		{
			dfs(a, b + c, u + 1);
		}
		if (f) return;
		
	}
	if (f) return;
}


int main()
{
	int t;
	cin >> t;
	
	while (t -- )
	{
		res.clear();
		f = 0;
		for (int i = 1; i <= 10; i ++ )
		{
			int x; cin >> x;
			res.push_back(x);
		}
		dfs("", "", 0);
		if (f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
