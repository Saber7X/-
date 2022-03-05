#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag[n + 3]= {0};
	while (n)
	{
		int x = (n - 1) % 3;
		n = (n - 1) / 3;
		if (x == 0) cout << "2";
		else if (x == 1) cout << "3";
		else cout << "6";
	}
	return 0;
}
