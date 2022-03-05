#include<bits/stdc++.h>
using namespace std;
int lowbit(int x)  // ·µ»ØÄ©Î²µÄ1
{
    return x & -x;
}

int  main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++ )
    {
        int x;
        int ans = 0;
        cin>> x;
        while(x)
        {
            x -= lowbit(x);
            ans ++;
        }
        cout << ans <<" ";
        
    }
    return 0;
}
