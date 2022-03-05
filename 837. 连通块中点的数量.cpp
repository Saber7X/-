#include <iostream>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int n, m;
int f[N];
int sise[N];

int find(int x)  // ²¢²é¼¯
{
    if (f[x] != x) f[x] = find(f[x]);
    return f[x];
}

void init()
{
    for (int i = 1; i <= n; i ++ )
    {
        f[i] = i;
        sise[i] = 1;
    }
}

void hebing(int a, int b)
{
    a = find(a), b = find(b);
    if(a != b) 
    {
        f[a] = b;
        sise[a] += sise[b];
    }
}

void Q1(int a, int b)
{
    a = find(a), b = find(b);
    if( a == b ) cout << "Yes" << endl;
    else cout << "No" << endl;
}

void Q2(int x)
{
    cout << sise[find(x)];
}

int main()
{
    cin >> n >> m;
    init();
    while (m -- )
    {
        char ss[3];
        cin >> ss;
        if(ss == "C")
        {
            int a, b;
            cin >> a >> b;
            hebing(a, b);
        }
        if(ss == "Q1")
        {
            int a, b;
            cin >> a >> b;
            Q1(a, b);
        }
        if(ss == "Q2")
        {
            int x;
            cin >> x;
            Q2(x);
        }
    }
    return 0;
}
