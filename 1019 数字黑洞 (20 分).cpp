#include<bits/stdc++.h>
using namespace std;
bool cmp(char a, char b)
{
	return a > b;
}
int main()
{
	string a;
	cin >> a;
	a.insert(a.begin(), 4 - a.length(), '0');
	while (1)
	{	
		sort(a.begin(), a.end());
		int x = stoi(a);
		sort(a.begin(), a.end(), cmp);
		int y = stoi(a);
		printf("%04d - %04d = %04d\n", y, x, y - x);
		
		a = to_string(y - x);
		a.insert(a.begin(), 4 - a.length(), '0');
		if (a == "6174" || a == "0000") break;
	}
	return 0;
}
