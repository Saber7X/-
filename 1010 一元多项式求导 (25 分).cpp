#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	int f = 0;
	while (cin >> a >> b)
	{
		
		int x = a * b, y = b - 1;
		
		if (x == 0) continue;
		else 
		{
			cout << x << " "  << y;
		}
		if (f != 0) cout << " ";
		f = 1;
	}
	return 0;
}
