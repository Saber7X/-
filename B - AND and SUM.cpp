#include<bits/stdc++.h>
using namespace std;

void check(int a, int b)
{
	for (int j = 0; j <= 1000; j ++ )
	{
		for (int k = 0; k <= 1000; k ++ )
		{
			if (j & k == a && j + k == b)
			{
				cout << a << b << j << k << endl;
				return;
			}
		}
	}
}

int main()
{
	for (int a = 1; a <= 100; a ++ )
	{
		for (int b = 1; b <= 100; b ++ )
		{
			check(a, b);
		}
	}
	return 0;
}
