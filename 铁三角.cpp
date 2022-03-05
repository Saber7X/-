#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int n; cin >> n;
	cout << min(100ll, n) << endl;
    int a = 1, b = 2;
    cout << a << " "<< b;
    int c;
	for (int i =3; i <= min(100ll, n); i ++ )
	{
		cout << a + b<< " ";
        a = b;
        b = a + b;
	}
	return 0;
}
