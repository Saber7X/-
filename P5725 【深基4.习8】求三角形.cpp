#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			printf("%02d", cnt);
			cnt ++;
		}
		cout << endl;
	}
	cout << endl;
	int a = n - 1;
	cnt = 1;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= a; j ++ )
		{
			cout << "  ";
		}
		for (int j = 1; j <= n - a; j ++ ) 
		{
			printf("%02d", cnt);
			cnt ++;
		}
		a --;
		cout << endl;
	}
	return 0;
}
