#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int mod = 1e9+7, N = 1010, INF = 1000000;
int n, V;
int f[N], cnt[N];
int main()
{	
	cin >> n >> V; 
	for(int i = 0; i <= V; i ++)  cnt[i] = 1;
    int w, v;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> v >> w;
        for(int j = V; j >= v; j -- )
    	{
    		int ans = f[j - v] + w;
    		if(ans > f[j])
    		{
    			f[j] = ans;
    			cnt[j] = cnt[j - v];
			}
			else if(ans == f[j])
			{
				cnt[j] = (cnt[j] + cnt[j - v]) % mod;
			}
		}
    }
    cout << cnt[V] << endl;
    return 0;
}
