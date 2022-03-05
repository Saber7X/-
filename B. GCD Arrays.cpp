#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int l, r, k; cin >> l >> r >> k;
		
		int ji = 0, ou = 0;
		
		if ((r - l + 1) % 2 == 0)
		{
			ji = (r - l + 1) / 2;
			ou = (r - l + 1) / 2;
		}
		else
		{
			if (l % 2 == 0)
			{
				ji = (r - l + 1) / 2;
				ou = (r - l + 1) / 2 + 1;
			}
			else
			{
				ou = (r - l + 1) / 2;
				ji = (r - l + 1) / 2 + 1;
			}
		}
		if ( (ji == 0 && ou == 1) || (ji == 1 && ou == 0 && l > 1) || (ji <= k)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
