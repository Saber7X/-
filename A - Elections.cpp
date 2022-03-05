#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t; cin >> t;
	while ( t-- )
	{
		int a, b, c;
//		cin >> a >> b >> c;
		scanf("%lld%lld%lld", &a, &b, &c);
		
		int maxn = max(a, max(b, c));
		
		int cnt = 0;
		if (maxn == a) cnt ++;
		if (maxn == b) cnt ++;
		if (maxn == c) cnt ++;
		
		if (cnt == 3) cout << "1 1 1" << endl;
		
		if (cnt == 2) 
		{
			if (a != maxn) cout << maxn - a + 1 << " ";
			else cout << 1 << " ";
			
			if (b != maxn) cout << maxn - b + 1 << " ";
			else cout << 1 << " ";
			
			if (c != maxn) cout << maxn - c + 1 << endl;
			else cout << 1 << endl; 
		}
		
		if (cnt == 1)
		{
			if (a != maxn) cout << maxn - a + 1 << " ";
			else cout << 0 << " ";
			
			if (b != maxn) cout << maxn - b + 1 << " ";
			else cout << 0 << " ";
			
			if (c != maxn) cout << maxn - c + 1 << endl;
			else cout << 0 << endl;
		}	 
	}
	return 0;
} 
