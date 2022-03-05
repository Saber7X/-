#include<bits/stdc++.h>
#define int long long
using namespace std;
int x, k;

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> k >> x;
		int flag = (1 + k) * k / 2;
		if(x >= k * k) 
		{
			cout << 2 * k - 1 << endl;
			continue;
		}
		if (x <= (1 + k) * k / 2)
		{
			int l = 0, r = k;
			int mid;
			int ans = 0;
			while (l <= r)
		    {
		        mid = (l + r) / 2;
		        if ((1 + mid) * mid / 2 >= x) ans = mid, r = mid - 1;
		        else l = mid + 1;
		    }
		    cout << ans << endl;
		}
		else
		{	int mid;
			int l = 0, r = k - 1;
			x = k * k - x;
			int ans;
			while (l <= r)
		    {
		        mid = (l + r) >> 1;
		        if ((1 + mid) * mid / 2 <= x) l = mid + 1;
		        else ans = 2 * k - mid, r = mid - 1;
		    }
		    cout << ans  << endl;//倒过来找时要正着减一下 
		}
	}
	return 0;
}
