#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N];
int main()
{
	int n, m;
	int sum = 0;
	for (int i = 1; i <= N; i ++ )
	{
		for (int j = i; j <= N; j ++ )
		{
			sum ++;
		}
	}
	cout << sum << endl;
	return 0;
}
