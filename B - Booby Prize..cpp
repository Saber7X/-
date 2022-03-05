#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
struct name{
	int p, id;
}num[N];
bool cmp(name a, name b)
{
	return a.p < b.p;
}
int n, a[N];
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		 cin >> num[i].p;
		 num[i].id = i;
	}
	sort(num + 1, num + n + 1, cmp);
	cout << num[n - 1].id;
	return 0;
}
