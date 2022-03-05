#include<bits/stdc++.h>
using namespace std;
char xx[4] = {'a', 'a', 'b', 'b'};
int main()
{
	int n;
	cin >> n;
	int j = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (j == 4) j = 0;
		cout << xx[j];
		j ++;
	}
	return 0;
}
