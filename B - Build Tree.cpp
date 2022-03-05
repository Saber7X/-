#include<bits/stdc++.h>
#define int long long
using namespace std;
int k, m, n, p, a[200105]= {0}, sum[200105] = {0}, ans = 0;
signed main()
{
	
	while(scanf("%lld %lld %lld %lld", &k, &m, &n, &p) != EOF)
	{
		//cin >> k >> m >> n >> p;
	
		for(int i = 1; i <= k; i ++ )
		{
			scanf("%lld", &a[i]);
			//cin >> a[i];
			//a[i] %= p;
		} 
		
		sort(a + 1, a + 1 + k);
		
		for(int i = 1; i <= k; i ++ )
		{
			sum[i] = a[i] + sum[i - 1];
			sum[i] %= p;
		}
		int flag = 0;
		
		for(int i = 1; i < m; i ++ )
		{
			ans += sum[(flag + n) % p];
			ans %= p;
			
			flag = n;
			
			n *= n;
			n %= p;
		}
		if(m == 1)
		{
			ans = 0;
		}
		cout << ans << endl;
	}
	
	
	return 0;
}
