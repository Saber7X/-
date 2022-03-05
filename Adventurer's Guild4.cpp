//#include <bits/stdc++.h>
//#define int long long 
//using namespace std;
//
//const int N = 1050;
//int v[N], m[N], w[N], f[N][N];
//
//signed main()
//{
//	int n, V, M; cin >> n >> V >> M;
//	
//	for (int i = 1; i <= n; i ++ )
//	{
//		cin >> v[i] >> m[i] >> w[i];
//	}
//	
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = V; j > v[i]; j -- ) //ÉúÃü 
//		{
//			for (int k = M; k >= 0; k -- ) //¹¥»÷ 
//			{
//				if (k - m[i] >= 0)
//				{
//					f[j][k] = max (f[j][k], f[j - v[i]][k - m[i]] + w[i]);
//				}
//				else if (j - v[i] + k  - m[i]> 0) //ÑªÁ¿¹»¼õ
//				{
//					f[j][k] = max(f[j][k], f[j - v[i] + k - m[i]][0] + w[i]);
//				}
//			}
//		}
//	}
//	cout << f[V][M];
//	return 0;
//}

#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1050;
int w[N], h[N], s[N], f[N][N];

signed main()
{
    int n, H, S; cin >> n >> H >> S;
    
    for (int i = 1; i <= n; i ++ )
    {
        cin >> h[i] >> s[i] >> w[i];
    }
    
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = H; j > h[i]; j -- )
        {
            for (int k = S; k >= 0; k -- )
            {
                if (k - s[i] >= 0)
                {
                    f[j][k] = max(f[j][k], f[j - h[i]][k - s[i]] + w[i]);
                    
                }
                else if (j - h[i] + k  - s[i] > 0)
                {
                    f[j][k] = max(f[j][k], f[j - h[i] + k - s[i]][0] + w[i]);
                }
            }
        }
    }
    
    cout << f[H][S] << endl;

    return 0;
}
