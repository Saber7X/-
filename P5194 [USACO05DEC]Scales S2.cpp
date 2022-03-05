//////#include<bits/stdc++.h> 
//////#define int long long
//////using namespace std;
//////const int N = 1005, M = 200005;
//////int a[N];
//////int f[N][M] = {0};
//////signed main()
//////{
//////	int n, c;
//////	cin >> n >> c;
//////	for (int i = 1; i <= n; i ++ )
//////	{
//////		cin >> a[i];
//////	}
//////	
//////	f[0][0] = 1;
//////	for (int i = 1; i <= n ;i ++ )
//////	{
//////		for (int j = 0; j <= c; j ++ )
//////		{
//////			if (j < a[i])
//////			{
//////				f[i][j] = f[i - 1][j];
//////			}
//////			else if (f[i - 1][j - a[i]] == 1)
//////			{
//////				f[i][j] += f[i - 1][j - a[i]];
////////				cout << f[i][j] << endl;
//////			}
//////		}
//////	}
//////	int ans = 0;
//////	for (int i = 1; i <= c; i ++ )
//////	{
//////		if (f[n][i] != 0)
//////		{
//////			ans = max(ans, i);
//////		}
//////	}
//////	cout << ans << endl;
//////	return 0;
//////}
////
////#include<bits/stdc++.h>
////#define int long long
////using namespace std;
////const int N = 1005;
////int w[N], summ[N];
////int n, c;
////bool st[N];
////int ans = 0;
////void dfs(int j, int sum)
////{
////	if (sum > c)
////	{
////		return;
////	}
////	
////	if (ans < sum)
////	{
////		ans = sum;
////		st[j] = 1;
////	}
////	
////	
////	
////	dfs(j + 1, sum + w[j]);
////	dfs(j + 1, sum);
////}
////signed main()
////{
////	cin >> n >> c;
////	for (int i= 1; i <= n; i ++ ) 
////	{
////		cin >> w[i];
////		summ[i] = summ[i - 1] + w[i];
////	}
////	
////	dfs(1, 0);
////	cout << ans << endl;
////	return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//long long sum[1005],a[1005],ans,n,c,s[1005];
//int cnt = 0;
//void dfs(int cur,long long x)
//{
//	cout<< "新dfs的参数！！： " << cur << " " << x << endl;
// for (int i= 0; i < cnt; i ++ ) cout << s[i] << " ";
// cout << endl;
// if(x>c)return;
// if(sum[cur-1]+x<=c)
// //一个剪枝：如果前面那些砝码可以全部取走，那直接取走即可。
// {
//  ans=max(ans,sum[cur-1]+x);
//  cout << " :   " << ans << endl;
//  return;
// }
// ans=max(ans,x);
// cout << " :   " << ans << endl;
// for(int i=1;i<cur;i++)
// {
// 	s[cnt++]=i;
// 	dfs(i,x+a[i]);
// 	cnt--;
// }
//  
// return;
//}
//
//int main()
//{
// cin>>n>>c;
// for(int i=1;i<=n;i++)
// {
//  cin>>a[i];
//  sum[i]=sum[i-1]+a[i];
// }
// dfs(n+1,0);
// cout<<ans<<endl;
// return 0;
//}
#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, c;
const int N = 10005;
int a[N], sum[N];
int ans = 0;

void dfs(int cnt, int x)
{
	if (x > c)
	{
		return;
	}
	if (sum[cnt - 1] + x <= c)
	{
		ans = max(ans, sum[cnt - 1] + x);
		return;
	}
	ans = max(ans, x);
	for (int i = 1; i < cnt; i ++ )
	{
		dfs(i, x + a[i]);
	}
}


signed main()
{
	cin >> n >> c;
	for (int i= 1; i <= n; i ++ )
	{
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	dfs(n + 1, 0);
	cout << ans << endl;
	return 0;
}
