#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int a, x, b, y;
	cin >> a >> x >> b >> y;
	int suma = 0;
	while (a > 0)
	{
		if (a % 10 == x)
		{
			suma = suma * 10 + x;
		}
		a /= 10;
	}
	int sumb = 0;
	while (b > 0)
	{
		if (b % 10 == y)
		{
			sumb = sumb * 10 + y;
		}
		b /= 10;
	}
	cout << suma + sumb << endl;
	return 0;
}
