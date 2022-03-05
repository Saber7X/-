#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;
int n, m, ans[N], st[N];
int main()
{
	cin >> n;
	int l = 1;
	int cnt = 1;
	for (int i = 1; i <= n; i ++ )
	{
		if (!st[i])
		{
			int a, b;
			for (int j = 1; j <= i; j ++ )
			{
				if (i != j && !st[j])
				{
					printf("? %d %d\n", i, j);fflush(stdout);
					cin >> a;
					printf("? %d %d\n", j, i);fflush(stdout);
					cin >> b;
					if (a > b)
					{
						st[i] = 1;
						ans[i] = a;
						break;
					}
					if (a < b)
					{
						st[j] = 1;
						ans[j] = b;
						break;
					}
				}
				
			}
		}
	}
	printf("! ");
	for (int i = 1; i <= n; i ++ )
	{
		if (st[i]) printf("%d ", ans[i]);
		else printf("%d ", n);
	}
	cout.flush();
	return 0;
}
