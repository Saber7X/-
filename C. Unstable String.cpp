#include <iostream>
#include <cstring>
#include <algorithm>
#define int long long
using namespace std;
const int N = 200005;
int f[N], t, ans;
char s[N];
signed main()
{
    cin >> t;
    while (t -- )
    {
        ans = 0;
        cin >> s;
        int len = strlen(s);
        int val = 0, id = 0;
        for(int i = len; i >= 1; i -- ) s[i] = s[i - 1];
        for(int i = 1; i <= len; i ++ )
        {
            if(s[i] == '?') f[i] = f[i - 1] + 1;
            else
            {
                int flag = i - id;
                if((flag % 2 != 0 && val != s[i] - '0') || (flag % 2 == 0 && val == s[i] - '0') || id == 0)
                {
                    f[i] = f[i - 1] + 1;
                }
                else
                {
                    f[i] = i - id;
                }
                id = i; 
                val = s[i] - '0';
            }
        }
        int ans = 0;
        for (int i = 1; i <= len; i ++ ) ans += f[i];
        cout << ans << endl;
    }
    return 0;
}
