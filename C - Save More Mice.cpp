#include<bits/stdc++.h>
using namespace std;
const int N = 4e5 + 10;
int a[N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, k; scanf("%d %d", &n, &k);
		
		for (int i = 1; i <= k; i ++ ) scanf("%d", &a[i]);
		
		sort(a + 1, a + 1 + k);
		
		int sum = n, ans = 0;
		
		for (int i = k; i >= 1; i -- )
		{
			if(sum - (n - a[i]) <= 0)
			{
				break;
			}
			else
			{
				sum = sum - n + a[i];
				ans ++;
			}
		}
		printf("%d\n", ans) ;
	}
	return 0;
}
