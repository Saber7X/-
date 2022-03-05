#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=10000;
int n, q;
int a[maxn], x;
int k[maxn], s[maxn];
signed main()
{
	scanf("%lld", &n);
	
	for(int i = 1; i <= n;i ++)
	{
		scanf("%lld", &a[i]);
	}	
		for(int i = 1;i < n;i ++)
		{
			k[i] = (a[i + 1] - s[i - 1] - 1) / a[i];
			
			s[i] = s[i - 1] + k[i] * a[i];
			
			k[i] += k[i - 1];
			cout << k[i] <<" ";
		}
		//cout << endl; 
	
	
	
	scanf("%lld", &q);
	
	while(q--)
	{
		scanf("%lld", &x);
		
		int p = upper_bound(s, s + n, x) - s - 1;
		
		int m = (x - s[p]) / a[p + 1];
		
		printf("%lld %lld\n",s[p] + m * a[p + 1], k[p] + m);
	}
	return 0;
}
