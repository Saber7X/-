#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 0;//´ÎÊı 
	while (1)
	{
		if (n == 1) break;
		cnt ++;
		if (n % 2 == 0) n /= 2;
		else n = (3 * n + 1) / 2;
	}
	cout << cnt << endl;
	return 0;
}
