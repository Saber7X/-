#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 105;
int f[N], a[N], f1[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++ ) cin >> a[i];
    for (int i = 1; i <= n; i ++ )
    {
        f[i] = 1;
        for (int j = 1; j < i; j ++ )
        {
            if(a[i] > a[j]) f[i] = max(f[i], f[j] + 1);
        }
    }
    for (int i = n; i >= 1; i -- )
    {
        f1[i] = 1;
        for (int j = n; j > i; j -- )
        {
            if(a[i] > a[j]) f1[i] = max(f1[i], f1[j] + 1);
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i ++ )
    {
        ans = max(ans, f[i] + f1[i] - 1);
    }
    cout << n - ans << endl;
    return 0;
}
