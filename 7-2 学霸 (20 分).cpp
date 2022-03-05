#include<bits/stdc++.h>
using namespace std;
const int N = 5005;
struct name{
	int a;
	int cnt;
	int sum;
};
unordered_map<int, name> ma;
vector<name> v;
bool cmp(name a, name b)
{
	if (a.cnt == b.cnt && a.sum == b.sum)
	{
		return a.a < b.a;
	}
	else if (a.sum == b.sum)
	{
		return a.cnt > b.cnt;
	}
	else
	{
		return a.sum > b.sum;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		int m; scanf("%d", &m);
		int k; scanf("%d", &k);
		for (int i = 1; i <= k; i ++ )
		{
			int s;
			scanf("%d", &s);
			ma[s].a = s;
			ma[s].cnt += 1;
			ma[s].sum += m;
		}
	}
	for (auto i : ma)
	{
		v.push_back(i.second);
	}
	sort(v.begin(), v.end(), cmp);
	int f = 0;
	int suma = 0, sumb = 0;
	cout << v[0].sum << " " << v[0].cnt << endl;
	for (int i = 0; i < v.size(); i ++ )
	{
		printf("%05d", v[i].a);
		if (v[i].sum > v[i + 1].sum || v[i].cnt > v[i + 1].cnt )
		{
			break;
		}
		printf(" ");
	}
	return 0;
}
