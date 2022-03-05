//以0为分界线
//0的右边有n个怪物
//0的左边（包含0） 在内，进入了就会被杀死 
//c点
// 1 3 5
// -1 1

//2 3 5
//1 2
//0 

#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100005;

bool cmp(int a, int b) 
{
    return a < b;
}
signed main()
{
    int t;
    cin >> t;
    while (t -- )
    {
        vector<int> a;
        int n, r;
        cin >> n >> r;
        unordered_map<int, int> ma;
        for (int i = 1; i <= n; i ++ ) 
        {
            int x;
            scanf("%lld", &x);
            if (!ma[x])
            {
                a.push_back(x);
                ma[x] = 1;
            }
        }
        sort(a.begin(), a.end(), cmp);
        int ans = 0;
        int sum = 0;
        for (int i = a.size() - 1; i >= 0; i -- )
        {
            if (a[i] - sum <= 0) break;
            ans ++;
            sum += r;
        }
        cout << ans << endl;
    }
    return 0;
} 
