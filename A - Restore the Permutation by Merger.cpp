#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		unordered_set<int>s;
		s.clear();
		
		for (int i = 1; i <= n *  2; i ++ )
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		vector<int> a;
		for (auto i : s)
		{
			a.push_back(i);
		}
		for (int i = a.size() - 1; i >= 0; i --)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

