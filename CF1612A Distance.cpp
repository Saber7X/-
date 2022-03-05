#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )       
	{
		int x, y;
		cin >> x >> y;
		if ((x + y) % 2 != 0)
		{
			cout << "-1 -1" << endl;
		}
		else
		{
			int flag = (x + y) / 2;
			if (y >= flag)
			{
				cout << x << " " << y - flag << endl;
			}
			else
			{
				cout << x - flag << " " << y << endl;;
			}
		}
	}
	return 0;
}
