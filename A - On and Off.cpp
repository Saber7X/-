#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s, t, k; cin >> s >> t >> k;
	int x = s;
	bool f = 0;//¿ªµÆ 
	while (1)
	{
		if (x == t) f = 1;
		if (x == k)
		{
			break;
		}
		if (x == 24) x = 0;
		
		x ++;
		
	}
	if (!f)  cout << "Yes";
	else cout << "No";
	return 0;
}
