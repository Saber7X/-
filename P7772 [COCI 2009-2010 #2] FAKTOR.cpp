#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, i; cin >> a >> i;
	for (int j = 1; j <= 100000; j ++ )
	{
		int ans = j / a;
		if (j % a != 0) ans ++ ;
		if (ans >= i)
		{
			cout << j;
			break;
		}
	}
	return 0;
}
