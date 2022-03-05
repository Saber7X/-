#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	map<char, int> m;
	m['A'] = a[0];
	m['B'] = a[1];
	m['C'] = a[2];
	
	for (int i = 0; i < 3; i ++ )
	{
		char c;
		cin >> c;
		cout << m[c] << " ";
	}
	return 0;
}
