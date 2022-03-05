#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int x1, x2, y1, y2, x, y;
//		cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
		scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x, &y);
		int ans = abs (x1 - x2) + abs(y1 - y2);
		if (y1 == y2 && y2 == y && x > min(x1, x2) && x < max(x1, x2)) ans += 2;
		else if (x1 == x2 && x2 == x && y > min(y1, y2) && y < max(y1, y2)) ans += 2;
//		cout << ans << endl;
		printf ("%d\n", ans);
	}
	return 0;
}
