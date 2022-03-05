#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	unordered_map<int, int> m;
	for (int i = 1; i <= n; i ++ )
	{
		int x; cin >> x;
		m[x] = i;
	}
	int q; cin >> q;
	while (q -- ) 
	{
		int x; cin >> x; 
		cout << m[x] << endl;
	}
	return 0;
}
