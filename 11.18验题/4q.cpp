#include <iostream>
#include <set>
#include <algorithm>
#include <cassert>
#define int long long

using namespace std;

const int N = 2e5 + 5;
int n, a, b;
int h[N];
set<int> pre;
int suf[N];

signed main()
{
    int T;
    cin >> T;
    while (T--) 
	{
        cin >> n >> a >> b;
        for (int i = 1; i <= n; i++) 
		{
            cin >> h[i];
        }
        suf[n] = h[n];
        
        for (int i = n - 1; i; i--) suf[i] = min(h[i], suf[i + 1]); //ÕÒ×îÐ¡Öµ 
            
        int res;
        bool found = false;
        pre.clear();
        pre.insert(h[1]);
        for (int i = 2; i < n; i++) 
		{
            pre.insert(h[i]);
            if (h[i] == suf[i]) continue;
                
            auto it = pre.lower_bound(h[i]);
            if (it == pre.begin()) continue;
            it--;
            if (!found) 
			{
                found = true;
                res = 1ll * a * (h[i] - *it) - 1ll * b * (h[i] - suf[i]);
                continue;
            }
            res = min(res, 1ll * a * (h[i] - *it) - 1ll * b * (h[i] - suf[i]));
        }
        if (!found) cout << "000" << endl;
        else cout << res << endl;
    }
    return 0;
}

