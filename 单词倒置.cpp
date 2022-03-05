#include<iostream>
using namespace std;
const int N = 1e5;
string a[N];
int main()
{
	int len = 0;
	while(cin >> a[len])
		len++;
	cout << a[len - 1];
	for(int i = len - 2;i >= 0; i--)
		cout <<" " << a[i];
	return 0;
}

