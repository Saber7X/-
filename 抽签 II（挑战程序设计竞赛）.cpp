#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n + 10];
	unordered_set<int>  s;
	for (int i = 1; i <= n; i ++ )
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	for (auto i : s)
	{
		for (auto j : s)
		{
			for (auto k : s)
			{
				for (auto l : s)
				{
					if (i + j + k + l == m)
					{
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
