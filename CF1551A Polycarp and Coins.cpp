#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int flag = n / 3;
		
		int a, b;
		a = flag, b = (n - flag) / 2;
	
		if ((n - a) % 2 != 0) a ++;
		cout << a << " " << b << endl;
	}
	return 0;
}
