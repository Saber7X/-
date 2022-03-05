#include<bits/stdc++.h>
using namespace std;
int ans;
void ha(int n, char a, char b, char c, char d)
{
	if (n == 0)
	{
		
	}
	else
	{
		ha(n - 1, a, b, d, c);
		ans ++;
		ha(n - 1, a, d, b, c);
		ha(n - 1, d, a, b, c);
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		ha(n, 'a', 'b', 'c', 'd');
		cout << ans << endl;
	}
	
	return 0;
}
