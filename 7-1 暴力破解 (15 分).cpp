#include<bits/stdc++.h> 
using namespace std;
int n;
int a[10] = {0};

int ans[10] = {0};
bool st[10];
int f = 0;
vector<string> v;
void dfs(int u, string s)
{
	if (u > 3) 
	{
		f = 1;
		v.push_back(s);
		return;
	}
	for (int i = 1; i <= n; i ++ )
	{
		s += (a[i] + '0');
		dfs(u + 1, s);
		s.pop_back();
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	dfs(1, "");
	for (int i = 0; i < v.size(); i ++ )
	{
		cout << v[i];
		if ((i + 1) % 10 == 0 && i != v.size() - 1)
		{
			cout << endl;
		}
		else if ((i + 1) % 10 != 0  && i != v.size() - 1) cout << " ";
	}
	return 0;
}
