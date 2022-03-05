#include <bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
signed main()
{
    int t;
    cin >> t;
    while (t -- )
    {
        int n, k;
        cin >> n >> k;
        int a[n + 10];
        for (int i= 1; i <= n; i ++ ) cin >> a[i];
        
        sort(a + 1, a + 1 + n);
        
        int f[n + 10];
        
        int l = 1, r = n;
        
        int sum = 0;
        
        vector <int> aa;
        vector <int> bb;
        for (int i = 1; i <= k; i ++ )
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                aa.push_back(x);
            }
            else
            {
                bb.push_back(x);
            }
        }
        sort(bb.begin(), bb.end(), cmp);
        for (auto i : bb)
        {
        	aa.push_back(i);
		}
        
        int cnt = 0;
        while (cnt <= k)
        {
         	cout << l << " " << r << endl;
        	if (aa[cnt] == 1)
        	{
        		sum = sum + a[r] * 2;
        		r --;cnt ++;
        		continue;
        		
			}
            sum = sum + a[l] + a[r];
            r --;
            l += (aa[cnt] - 1);
            cnt ++;
        }
        cout << sum << endl;
    }
    return 0;
}
/*

*/
