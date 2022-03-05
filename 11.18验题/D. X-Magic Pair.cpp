#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() 
{
	int t; cin >> t;
	while (t -- )
	{
		int a, b, flag; cin >> a >> b >> flag;
		if(flag > a && flag > b) cout << "NO" << endl;
		else
		{
			if (flag == a || flag == b) cout << "YES" << endl;
			else 
			{
				if (a > b) swap(a, b);
				if ((b - flag) % (b - a) == 0) cout << "YES" << endl;
				else
				{
					int aa = (b - flag) % (b - a);
					if (aa + flag + flag == a) cout << "YES" << endl;
					else cout << "NO" << endl;
				}
			}
		} 
	}
	return 0;
}
