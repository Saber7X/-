#include<bits/stdc++.h>
using namespace std;
const int N = 310, INF = 0x3f3f3f3f;

int d[N * 2][N * 2];
int n, m;

signed main()
{
    cin >> n >> m;
    for (int i = 0; i < N; i ++ )
    {
        for (int j = 0; j < N; j ++ )
        {
            if (i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }
    for (int i = 1; i <= m; i ++ )
    {
        int c; cin >> c;
        int a[c + 10]={0};
        for (int  j = 1; j <= c; j ++ )
        {
            cin >> a[j];
        }
        for (int  j = 1; j <= c; j ++ )
        {
            for (int k = j + 1; k <= c; k ++ )
            {
            	if (k == j) d[a[j]][a[k]] = 0;
                d[a[j]][a[k]] = 1;
                d[a[k]][a[j]] = 1;
                
            }
        }
    }
    
    for (int k = 1; k <= n; k ++ )
    {
        for (int i = 1; i <= n; i ++ )
        {
            for (int j = 1; j <= n; j ++ )
            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
//    for (int i =1; i <= n; i ++ )
//    {
//    	for (int j = 1; j<= n; j ++ )
//    	{
//    		cout << d[i][j] << " ";
//		}
//		cout << endl;
//	}
    int sum = INF;
    for (int i = 1; i <= n; i ++ )
    {
        int s = 0;
        for(int j = 1; j <= n; j ++ )
        {
            if (i == j) continue;
            s += d[i][j];
        }
        sum = min (sum, s);
    }
    
    cout << (int)((double)sum / (double)(n - 1) * 100.0)  << endl;
    return 0;
}
