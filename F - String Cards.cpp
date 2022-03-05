#include<bits/stdc++.h>
using namespace std;
struct name{
	string s;
	int len;
}num[60];

bool cmp(name a, name b)
{
	return a.s < b.s;
	return a.len < b.len;
}

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i ++ )	
	{
		cin >> num[i].s;
		num[i].len = num[i].s.length();
	}
	sort(num + 1, num + 1 + n, cmp);
	for (int i = 1; i <= k; i ++ )
	{
		cout << num[i].s;
	}
	return 0;
}
