#include<bits/stdc++.h> 
using namespace std;
const int N = 1005;
int a[N], b[N];

int main()
{
	int n, m;
	cin >> n >> m;
	map<int, int> ma;
	for (int i = 1; i <= n; i ++ ) 
	{
		cin >> a[i];
		ma[a[i]] ++;
	}
	bool f= 0;
	for (int i = 1; i <= m; i ++ ) 
	{
		cin >> b[i];
		if (ma[b[i]] <= 0)
		{
			f = 1;
		}
		ma[b[i]] --;
	}
	if (!f) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
