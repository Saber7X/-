#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		double n, m;
		cin >> n >> m;
		int ans = 0;
		double a = 0, b = 0, c = 0;
		while (1)
		{
			if ((int)n == 0 && (int)a == 0 && (int)b == 0) break;
//			cout <<"::"<< n << " " << a << " " <<  b << " " <<  c << endl;
//			printf(":: RMB:%f  红:%f  绿:%f   消费经验:%f\n", n, a, b ,c);
			if (n > 0)
			{
				n = (int)n;
				a = a + n * 100.0;
				b = min(10000.0, b + n * 100.0 * (m - 1.0));
				n = 0.0;
				continue;
				
			}
			if (a > 0 || b > 0)
			{
				double x = a;
				a = (int)(a + b);
				n += x/200.0;
				c += a/10.0;
				a = 0.0;
				b = 0.0;
				continue;
			}
		}
		printf("%.0f\n", c);
	}

	return 0;
}
