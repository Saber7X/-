#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1414214, N = maxn + 5, mod = 1e9 + 7;
ll l[N], r[N], sum[N], T;
int main()
{
    cin >> T;
    for(ll i = 1; i <= maxn; i++)
    {
        l[i] = r[i - 1] + 1;
        r[i] = l[i] + i - 1;
        sum[i] = sum[i - 1] + (1 + i) * i / 2;
    }
    while(T--)
    {
        ll L, R, res;
        cin >> L >> R;
        ll id1 = lower_bound(r, r + maxn, L) - r;
        ll id2 = lower_bound(r, r + maxn, R) - r;
        if(id1 == id2) res = (R - L + 1) * (R - l[id1] + L - l[id1] + 2) / 2;
        else
        {
            ll sum1 = sum[id2 - 1] - sum[id1];
            ll idl = L - l[id1] + 1, idr = R - l[id2] + 1; //求出L和R在块中的位置
            ll suml = (id1 - idl + 1) * (id1 + idl) / 2;
            ll sumr = (1 + idr) * idr / 2;
            //cout << sum1 << ' ' << suml << ' ' << sumr << endl;
            res = sum1 + suml + sumr;
        }
        cout << res << endl;
    }
    return 0;
}

