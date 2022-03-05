#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; 
		cin >> n;
		vector<int> a;
		bool f=0;
		for (int i = 1; i <= n; i ++ )
		{
			int x; cin >> x;
			a.push_back(x);
			if (x < 0)
			{
				f = 1;
			}
		}
		if (f) 
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
			cout << "300"  << endl;
			for (int i = 0; i <= 299; i ++ )
			{
				cout << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
