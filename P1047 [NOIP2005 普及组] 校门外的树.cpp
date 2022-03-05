//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e4 + 10;
//
//struct name{
//	int l, r;
//}num[N];
//
//bool cmp(name a, name b)
//{
//	if (a.l == b.l)
//	{
//		return a.r < b.r;
//	}
//	return a.l < b.l;
//} 
//
//int main()
//{
//	int n; cin >> n;
//	int m; cin >> m;
//	int sum = n + 1;
//	for (int i = 1; i <= m; i ++ )
//	{
//		cin >> num[i].l >> num[i].r;
//	}
//	sort(num + 1, num + 1 + n, cmp); 
//	int l = num[1].l, r = num[1].r;
//	for (int i = 2; i <= n; i ++ )
//	{
//		int l1 = num[i].l, l2 = num[i].r;
//		
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int res[N];
int main()
{
	
	int n, k; cin >> n >> k;
	for (int i = 1; i <= k; i ++ )
	{
		int l, r; cin >> l >> r;
		for (int j = l; j <= r; j ++ ) 
		{
			res[j]	 = 1;
		}
	}	
	int sum = 0;
	for (int i = 0 ; i <= n; i ++ )
	{
		if (res[i] == 0)
		{
			sum ++;
		}
	}
	cout << sum << endl;
	return 0;
}
