#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c; cin >> a >> b >> c;
	if (a + b == c) printf("%d+%d=%d", a, b, c);
	else if (a == b + c) printf("%d=%d+%d", a, b, c);
	else if (a == b - c) printf("%d=%d-%d", a, b, c);
	else if (a == b * c) printf("%d=%d*%d", a, b, c);
	else if (a - b == c) printf("%d-%d=%d", a, b, c);
	else if (a * b == c) printf("%d*%d=%d", a, b, c);
	else if (a / b == c && a % b == 0) printf("%d/%d=%d", a, b, c);
	else if (a == b / c && b % c == 0) printf("%d=%d/%d", a, b, c);
	return 0; 
}
