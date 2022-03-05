#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	if (a.find(b) == -1) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
