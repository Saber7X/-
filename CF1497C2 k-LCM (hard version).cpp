#include<bits/stdc++.h>
using namespace std;
int t, n, k;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n >> k;
		n -= (k - 3);
		for (int i = 1; i <= k - 3; i ++ ) cout << 1 << " ";
		if(n % 2 == 1)
		{
			cout << "1 " << n / 2 << " " << n / 2  << endl;
		}
		else if ((n / 2) % 2 == 1)
		{
			cout << "2 " << n / 2 - 1 << " " << n / 2 - 1  << endl;
		}
		else
		{
			cout << n / 2 << " " << n / 4<< " " << n / 4  << endl;
		}
	}
	return 0;
}
