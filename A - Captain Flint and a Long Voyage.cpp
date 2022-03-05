#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t; cin >> t;
	
	while (t -- )
	{
		int n; cin >> n;
		int flag = n / 4; 
		if (n % 4 != 0) flag ++;
		
		for (int i = 1; i <= n - flag; i ++ ) cout << 9;
		for (int i = 1; i <= flag; i ++ ) cout << 8;
		cout << endl;
	}
	return 0;
}
