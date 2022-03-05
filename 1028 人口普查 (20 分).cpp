#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct name{
	string s;
	int a;
	int b;
	int c;
}num[N];
int n;
bool cmp(name a, name b)
{
	if (a.a == b.a && b.b == a.b)
	{
		return a.c < b.c;
	}
	else if (a.a == b.a )
	{
		return a.b < b.b;
	}
	else
	{
		return a.a < b.a;
	}
}
int main()
{
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i ++ )
	{
		string s;
		int a, b, c;
		cin >> s;
		scanf("%d/%d/%d", &a, &b, &c);
		if (a < 1814 || (a == 1814 && (b < 9 || (b == 9 && c < 6)))) continue;
		if (!(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && b == 2 && c == 29) continue;
		if (a > 2014 || (a == 2014 && (b > 9 || (b == 9 && c > 6)))) continue;
		num[cnt ++ ] = {s, a, b, c};
	}
	sort(num, num + cnt, cmp);
	if (cnt == 0) cout << 0;
	else cout << cnt << " " << num[0].s << " " << num[cnt - 1].s;
	return 0;
}
