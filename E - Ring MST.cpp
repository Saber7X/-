#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2005;
int n, m, c;
struct name{
    int first,second;
}p[N];
int g[N][N];
using namespace std;
signed main()
{
    
    int cnt = 1;
    cin >> n >> m >> c;
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= m; j ++ )
        {
            cin >> g[i][j];
            p[cnt].first = i;
            p[cnt].second = j;
            cnt ++;
        }
    }
//    for(int i = 1; i <= cnt ; i ++)
//    {
//        cout << p[i].first <<" "<<p[i].second<<endl;
//    }
    int minn = 999999999999999;
    for (int i = 1; i <= cnt - 2 ; i ++ )
    {
        int x1 = p[i].first;
        int y1 = p[i].second;
        for (int j = i + 1; j <= cnt -1 ; j ++ )
        {
            int x2 = p[j].first;
            int y2 = p[j].second;
            int ans = c * (abs(x1 - x2) + abs(y1 - y2)) + g[x1][y1] + g[x2][y2];
            //cout << ans <<" ";
            minn = min(minn, ans);
        }
    }
    cout << minn;
    return 0;
}

