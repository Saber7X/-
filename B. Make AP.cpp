#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int a, b, c;
		cin >> a >> b >> c;
		int f = c - b; //¹«²î 
		int x = b - f;
		if (x >= a && x % a == 0 && x - b == b - c)
		{
			cout << "YES" << endl;
			continue;
		}
		f = (c - a) / 2;
		x = a + f;
		if ((c - a) % 2 == 0 && x >= b && a - x == x - c && x % b == 0)
		{
			cout << "YES" << endl;
			continue;
		}
		f = b - a;
		x = b + f;
		if (x >= c && x % c == 0 && a - b == b - x)
		{
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	return 0;
}
