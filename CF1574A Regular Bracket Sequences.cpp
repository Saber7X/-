#include<bits/stdc++.h>
using namespace std;
map<int, int> f;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		for (int j = 1; j <= n; j ++ )
		{
			f[n] ++;
			for (int i = 1; i <= f[n]; i ++ ) cout << "(";
			for (int i = 1; i <= f[n]; i ++ ) cout << ")";
			for (int i = 1; i <= n - f[n]; i ++ ) cout << "()";
			cout << endl;
		}
		f[n] = 0;
		
		
	}
	return 0;
}
