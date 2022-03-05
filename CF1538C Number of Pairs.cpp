#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
int b[N];

signed main()
{
	int T; cin >> T;
	while (T -- )
	{
		int ans = 0;
		int n, l, r; scanf("%lld%lld%lld", &n, &l, &r);
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &a[i]);
		
		sort(a + 1, a + 1 + n);
		
		for (int i = 1; i <= n; i ++ ) b[i] = a[n - i + 1];
		
//		for (int i = 1; i <= n; i ++ ) cout << a[i] << " ";
		cout << endl; 
		
		for (int i = 1; i <= n; i ++ )
		{
			int ll = abs(l - a[i]), rr = abs(r - a[i]);
			int aa = lower_bound(a + 1 + i, a + 1 + n, ll) - a;
			int bb = upper_bound(a + 1 + i, a + 1 + n, rr) - a;
//			printf("                             %d %d\n", aa, bb);
			if (aa > bb) continue;
			else
			{
				ans = ans + (bb - aa);
			}
		}
		cout << ans << endl;
		
	}
	return 0;
}

//二分函数的运用 
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int k,n=10;
//int a[10]={1,1,1,3,3,5,5,5,5,6};
//int main()
//{
//    for(int i=0;i<n;i++)cout<<a[i]<<" ";
//    cout<<endl;
//   while(scanf("%d",&k))
//   {
//       cout<<k<<"的第一个大于它的位置在"<<((upper_bound(a,a+n,k))-a)+1<<endl;
//   }
//}
