//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//const int N = 100005;
//int n, t;
//signed main()
//{
//		cin >> n;
//		int res[N] = {0}, cnt = 0;
//		int ans[N] = {0};
//		bool st[N] = {false};
//		memset(st, 0, sizeof st);
//		for(int i = 1; i <= n; i ++ )
//		{
//			int a, b;
//			cin >> a >> b;
//			if(a == -1) continue;
//			st[a] = 1;//有子节点 
//			if(b == 1) res[i] ++;
//			if(res[a] != 0 && b == 1) ans[cnt ++] = a;
//		}
//		for(int i = 1; i <= n; i ++ )
//		{
//			if(!st[i] && res[i] != 0) ans[cnt ++ ] = i; 
//		}
//		sort(ans, ans + cnt);
//		if(cnt == 0) 
//		{
//			cout << "-1";return 0;
//		}
//		for(int i = 0; i < cnt; i ++  )
//		{
//			cout << ans[i] << " ";
//		}
//	return 0;
//}
#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N = 100005;
int n, t;	
int c[N] , cnt[N] , a[N] ;
int res[N];
signed main()
{
		cin >> n;
		for(int i = 1; i <= n; i ++ )
		{
		
			cin >> a[i] >> c[i];
			if(a[i] >= 0) 
			{
				cnt[a[i]] ++;
				res[a[i]] += c[i];
			}
		}
		int flag = 0;
		for(int i = 1; i <= n; i ++ )
		{
			//n个数1-n所以是一条链，不会有重复 
			if(a[i] >= 0 && cnt[i] == res[i] && c[i] == 1) 
			{
				cout << i << " "; flag = 1; 
			}
		}
		if(!flag) cout << "-1";
	return 0;
}
