#include<bits/stdc++.h> 
using namespace std;
const int N = 1005;
int a[N][N];

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			cin >> a[i][j];
		}
	}
	int s = 0;
	int sum = 0, sum1 = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int sumn = 0;
		int summ = 0;
		for (int j = 1; j <= n; j ++ )
		{
			sumn += a[j][i];
			summ += a[i][j];
		}
		if (i == 1) 
		{
			sum1 = summ;
			sum = sumn;
		}
		if (sum != sumn)
		{
			s = 1;
			break;
		}
		sum = sumn;
		sum1 = summ;
	}
	if (s == 1) cout << "NO";
	else cout << "YES";
	return 0;
}
