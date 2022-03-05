#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, l, r;
	cin >> t;
	while(t -- )
	{
		cin >> l >> r;
		int x = 0, y = 0;
		while(l > 0)
		{
			x += l;
			l /= 10;
		}
		while(r > 0)
		{
			y += r;
			r /= 10;
		}
		cout << y - x  << endl;
 	}
	return 0;
}
