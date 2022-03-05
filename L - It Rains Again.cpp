#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n;
struct name{
	int a;
	int b;
}num[N];
bool cmp (name a, name b)
{
	if (a.a == b.a)
	{
		return a.b < b.b;
	}
	return a.a < b.a;
	
}
int main()
{
	scanf("%d", &n);
	for (int i= 1; i <= n; i ++ )
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a > c) swap(a, c);
		num[i].a = a;
		num[i].b = c;
	}
	sort (num + 1, num + 1 + n, cmp);
	int l = num[1].a, r = num[1].b;
	int ans  = r - l;
	for (int i= 2; i <= n; i ++ )
	{
		if (num[i].a > r) 
		{
			ans += (num[i].b - num[i].a);
			l = num[i].a;
			r = num[i].b;
		}
		else if (num[i].a >= l && num[i].a <= r && num[i].b >= l) 
		{
			ans = ans + num[i].b - r;
			l = num[i].a;
			r = num[i].b;
		}
	}
	cout << ans << endl;
	return 0;
	
}
/*
5
4 2 3 3
1 2 3 4
1 4 5 3
6 3 3 4
6 5 2 3
*/
