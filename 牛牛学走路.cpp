#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		string s;
		cin >> s;
		double x = 1.0, y = 1.0;
		double maxn = 0.0;
		
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == 'U')
			{
				x -= 1.0;
				maxn = max(maxn, sqrt( abs(x - 1.0) * abs(x - 1.0) + abs(y - 1.0) * abs(y - 1.0) ) );
			}
			else if (s[i] == 'D')
			{
				x += 1.0;
				maxn = max(maxn, sqrt( abs(x - 1.0) * abs(x - 1.0) + abs(y - 1.0) * abs(y - 1.0) ) );
			}
			else if (s[i] == 'L')
			{
				y -= 1.0;
				maxn = max(maxn, sqrt( abs(x - 1.0) * abs(x - 1.0) + abs(y - 1.0) * abs(y - 1.0) ) );
			}
			else if (s[i] == 'R')
			{
				y += 1.0;
				maxn = max(maxn, sqrt( abs(x - 1.0) * abs(x - 1.0) + abs(y - 1.0) * abs(y - 1.0) ) );
			}
		}
		printf("%.10f\n", maxn);
	}
	return 0;
}
