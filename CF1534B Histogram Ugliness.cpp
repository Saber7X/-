#include <iostream>
#include <cstring>
#include <algorithm>
#define int long long 
using namespace std;
signed main()
{
    int T; cin >> T;
    while(T -- )
    {
        int n, sum = 0; scanf("%lld", &n);
        int a[400005]={0};
        for (int i = 1; i <= n ; i ++ )
        {
            scanf("%lld", &a[i]);
        }
        for (int i = 1; i <= n + 1; i ++ )
        {
        	sum += abs(a[i] - a[i - 1]); 
        }
        for(int i = 1; i <= n; i ++ )
        {
            if(a[i] > a[i - 1] && a[i] > a[ i + 1])
			{
				int maxn =max(a[i - 1], a[ i + 1]);
				sum -= (a[i] - maxn);
				a[i] = maxn;
			} 
        }
        printf("%lld\n", sum);
    }
    return 0;
}
