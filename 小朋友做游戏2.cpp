//
// Created by saber on 2022/2/15.
//

#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int suma[N] = {0};
int sumb[N] = {0};
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
    int t; cin >> t;
    while (t -- )
    {
        int a, b, n;
        cin >> a >> b >> n;
        memset(suma, 0, sizeof suma);
        memset(sumb, 0, sizeof sumb);
        for (int i = 1; i <= a; i ++ )
        {
            cin >> suma[i];
        }
        for (int i = 1; i <= b; i ++ )
        {
            cin >> sumb[i];
        }
        sort(suma + 1, suma + 1 + a, cmp);
        sort(sumb + 1, sumb + 1 + b, cmp);
        
        for (int i = 1; i <= a; i ++ )
        {
        	suma[i] += suma[i - 1];
        }
        for (int i = 1; i <= b; i ++ )
        {
        	sumb[i] += sumb[i - 1];
        }
        
        int maxn = 0;
        int f = n/2 + (n % 2);
        if (a < f)
        {
        	cout << -1 << endl;
        	continue;
		}
		
        for (int i = f; i <= min(a, n); i ++ )
        {
        	maxn = max(suma[i] + sumb[n - i], maxn);
		}
		cout << maxn << endl;
    }

    return 0;
}
