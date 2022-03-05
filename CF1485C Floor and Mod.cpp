#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t --)
	{
		int x, y;
		int res=0;
		
		cin >> x >> y;
		
		for (int k = 1; k * k < x; k ++ )
		{
			res = res + max((int)0, min(y, x / k - 1) - k);
		}
			
		printf("%lld\n",res);
	}; 
	return 0;
}
