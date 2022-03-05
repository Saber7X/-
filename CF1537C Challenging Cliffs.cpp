#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int a[N];

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int x;
		int minn = 999999999;
		int n; scanf("%d", &n);
		
		for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);
		sort(a + 1, a + 1 + n);
		if (n == 2) printf("%d %d\n", a[1], a[2]);
		else
		{
			for (int i = 2; i <= n; i ++ )
			{
				if (a[i] - a[i - 1] < minn)
				{
					minn = a[i] - a[i - 1];
					x = i;
				}
			}
			for (int i = x; i <= n; i ++ ) printf("%d ", a[i]);
			for (int i = 1; i <= x - 1; i ++ ) printf("%d ", a[i]);	
			cout << endl;
		}
	}
	return 0;
}
