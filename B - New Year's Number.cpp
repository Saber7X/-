#include <iostream>
#include <cstring>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t -- )
    {
        int n;
        cin >> n;
        int a = n / 2020; //a + b
        int b = n % 2020; // b
        if (b <= a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
//a * 2020 + b * 2021
//a * 2020 + b * (2020 + 1)
//a * 2020 + b * 2020 + b
//(a + b) * 2020 + b = n
