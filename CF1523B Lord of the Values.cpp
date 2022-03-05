#include<bits/stdc++.h> 
#define int long long
using namespace std;

const int N = 1e3 + 10;
int a[N];

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);
		cout << n * 3 << endl;
		for (int i = 1; i <= n; i += 2)
		{
			printf("2 %d %d\n", i, i + 1);
			printf("2 %d %d\n", i, i + 1);
			printf("1 %d %d\n", i, i + 1);
			printf("2 %d %d\n", i, i + 1);
			printf("2 %d %d\n", i, i + 1);
			printf("1 %d %d\n", i, i + 1);
		}
		
	}
	return 0;
}
