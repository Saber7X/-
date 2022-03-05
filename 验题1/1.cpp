#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;int maxn = 0;
    cin >> n; 
    int cnt = 0;
    for (int i = 1; i <= n; i ++ )
    {
        int x; scanf("%d", &x);
        if (x > maxn) 
        {
            maxn = x;
            cnt ++;
        }
    }
    cout << cnt << endl;
    return 0;
}
