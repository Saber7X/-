#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		if (n == 1) cout << 1 << endl;
		else if (n % 2 != 0)
		{
			cout << 3 << " ";
			for (int i = 1; i <= 2; i ++ )
			{
				cout << i << " ";
			}
//			cout << endl;
			for (int i = 4; i <= n; i += 2 )
			{
				cout << i + 1 << " " << i << " ";
			}
			cout << endl;
		}
		else
		{
			for (int i = 1; i <= n; i += 2)
			{
				cout << i + 1 << " " << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}