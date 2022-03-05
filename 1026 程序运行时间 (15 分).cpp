#include<bits/stdc++.h> 
using namespace std;
int main()
{
	//1h = 60min = 3600s
	//1min = 60s 
	int c1, c2; cin >> c1 >> c2;
	int c = c2 - c1;
	
	int f = 0;
	if (c % 100 >= 50) f=1;
//	if (c % 100 != 0) f = 1;
	c /= 100;
	c += f;
	printf("%02d:", c / 3600);
	c %= 3600;
	printf("%02d:", c / 60);
	c %= 60;
	printf("%02d", c);
	return 0;
}
