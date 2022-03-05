#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int g[N];
struct name{
	int a, b;
}num[N];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i < n; i ++ )
	{
		cin >> num[i].a >> num[i].b;
		g[num[i].a] ++ ;
		g[num[i].b] ++ ;
	}
	if(n == 2)
	{
		cout << 0 << endl;
		return 0;
	}
	int k = 0;
	for(int i = 1; i <= n; i ++ )
	{
		if(g[i] >= 3) k = i;
	} 
	int l = 0, r = n - 2;
	for(int i = 1; i < n; i ++ )
	{
		if(num[i].a == k || num[i].b == k)
		{
			cout << l << endl;
			l ++;
		}
		else
		{
			cout << r << endl;
			r --; 
		}
	}
	return 0;
}
