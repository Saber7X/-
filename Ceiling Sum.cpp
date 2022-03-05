#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin >> T;
	while(T -- )
	{
		double a, b;
		cin >> a >> b;
		int ans = ceil(b/2) - ceil(a/2); 
		cout << ans << endl; 
	}
	return 0;
}
