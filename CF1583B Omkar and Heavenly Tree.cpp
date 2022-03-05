#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= m; i ++ )
		{
			int a, b, c;
			cin >> a >> b >> c;
			cout << a << " " << c << endl;
			cout << c <<" " << b << endl;
		}
	}
	return 0;
}
