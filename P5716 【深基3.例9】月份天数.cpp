#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int y, m;
	cin >> y >> m;
	bool f = 0;
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) f = 1;
	
	if (m == 1) cout << 31;
	if (m == 2 && !f) cout << 28;
	if (m == 2 && f) cout << 29;
	if (m == 3) cout << 31;
	if (m == 4) cout << 30;
	if (m == 5) cout << 31;
	if (m == 6) cout << 30;
	if (m == 7) cout << 31;
	if (m == 8) cout << 31;
	if (m == 9) cout << 30;
	if (m == 10) cout << 31;
	if (m == 11) cout << 30;
	if (m == 12) cout << 31;
	
	return 0;
}
