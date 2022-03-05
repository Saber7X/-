#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10;

int a[N];
int b[N];

int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		int n, x; scanf("%d%d", &n, &x);
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		if (x * 2 <= n) printf("YES\n");
		else
		{
			sort(b + 1, b + 1 + n);
			bool f = 0; 
			for (int i = n - x + 1; i <= x; i ++ )
			{
				if (a[i] != b[i])
				{
					f = 1;
					break;
				}
			}
			if (!f) printf("YES\n");
			else printf("NO\n");
		}
		
	}
	return 0;
}
