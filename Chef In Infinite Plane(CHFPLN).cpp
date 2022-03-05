#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t -- )
	{
		unordered_map<int, int> res;
		int a[200005];
		int n;
		scanf("%d", &n);
		int ans = 0;
		for(int i = 1; i <= n; i ++ )
		{
			scanf("%d", &a[i]);
			res[a[i]] ++;
			if(res[a[i]] <= a[i] - 1)
			{
				ans ++;
			}	
		}
		printf("%d\n", ans);
	}
	return 0;
}
