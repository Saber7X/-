#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int quick_read() noexcept {
	int x = 0, f = 1;
	char ch;
	while (! isdigit (ch = getchar()))
		if (ch == '-')
			f = -f;
	x = ch - '0';
	while (isdigit (ch = getchar()))
		x = (x << 3) + (x << 1) + ch - '0';
	return x * f;
}

inline void quick_write(int x) {
	if (x == 0)
		putchar('0');
	else {
		int a[20] = {0};
		int top = 0;
		while (x) {
			int temp = x % 10;
			a[++ top] = temp;
			x /= 10;
		}
		for (int i = top; i >= 1; i --)
			putchar(a[i] + '0');
	}
}

const int N = 1e6 + 10;
int a[N], b[N], pos[N];

signed main()
{
	int t = quick_read();
	while (t -- )
	{
		int n; n = quick_read();
		int ans = 99999999999;
		for (int i = 1; i <= n; i ++ ) a[i] = quick_read();
		for (int i = 1; i <= n; i ++ ) b[i] = quick_read();
		for (int i = 1, j = 1; i <= n * 2; i += 2)
		{
			while  (b[j] < i) j ++;
			
			pos[i]  = j;
		} 
		for (int i = 1; i <= n; i ++ ) 
		{
			if (i - 1 + pos[a[i]] - 1 < ans) ans = i - 1 + pos[a[i]] - 1;
		}
		quick_write(ans);
		puts("");
	}
	return 0;
}
