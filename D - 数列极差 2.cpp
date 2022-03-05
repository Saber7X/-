#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;
	for (int i = 1; i <= n; i ++ )
	{
		int x; cin >> x;
		a.push_back(x);
		b.push_back(x);
	}
	int cc; cin >> cc;
	while (a.size() > 1)
	{
		sort(a.begin(), a.end());
		int x = a[a.size() - 1];
		int y = a[a.size() - 2];
		a.erase(a.begin() + a.size() - 1, a.begin() + a.size() - 2);
		a.push_back(x * y + 1);
	}
	while (b.size() > 1)
	{
		sort(b.begin(), b.end());
		int x = b[0];
		int y = b[1];
		b.erase(b.begin(), b.begin() + 2);
		b.push_back(x * y + 1);
	}
	cout << a.back() - b.back() << endl;
	return 0;
}
