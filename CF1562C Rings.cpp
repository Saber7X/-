#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 10;
char s[N];
int main() 
{
	int t; cin >> t;
	while (t -- )
	{
		int n;
		scanf("%d%s", &n, s + 1);
		bool f = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (s[i] == '0')
			{
				f = 1;
				if (i <= n / 2) printf("%d %d %d %d\n", i, n, i + 1, n);
				else printf("1 %d 1 %d\n", i, i - 1);
				break;
			}
		}
		//需要长度相同，才能一样 
		if (!f) printf("1 %d 2 %d\n", n - 1, n );
		
	}
	return 0;
}
