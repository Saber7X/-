#include<bits/stdc++.h> 
using namespace std;

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	for (int i = 0; i < a.length(); i ++ ) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
	
	for (int i = 0; i < b.length(); i ++ ) if (b[i] >= 'a' && b[i] <= 'z') b[i] -= 32;

	char c;
	int d = strcmp(a.c_str(), b.c_str());
	
	if (d == 0) cout << "=";
	if (d < 0) cout << "<";
	if (d > 0) cout << ">";
	
	return 0;
}
