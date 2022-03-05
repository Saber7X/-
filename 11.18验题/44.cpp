#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5 + 10;
int num[N];
int minn1[N];
int minn2[N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, a, b; cin >> n >> a >> b;
		minn1[0] = 0x3f3f3f3f;
		minn2[0] = 0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ ) 
		{
			cin >> num[i];
			minn1[i] = min(minn1[i - 1], num[i]);
			
		}
		for (int i = 1; i <= n; i ++ ) cout << minn1[i] << " ";
		cout << endl;
		for (int i = n; i >= 1; i -- ) 
		{
			minn2[i] = min(minn2[i - 1], num[i]);
			cout << minn2[i] << " ";
		}
	}
	return 0;
}
