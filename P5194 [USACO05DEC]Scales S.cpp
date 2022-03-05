#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 1005;
int n, c;
int a[N];
int sum[N];
bool st[N];
int maxn = 0;

void dfs(int sum, int u)
{
	if(sum > c || u== n+1) return;
	st[u] = 1;
	for (int i = 1; i <= n; i ++ )
	{
		if (!st[i])
		{
			dfs(sum + a[i], i);
			maxn = max(sum, maxn);
			st[i] = 0;
		}
	}
}

signed main()
{
	cin >> n >> c;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	dfs(0, 0);
	cout << maxn;
	return 0;
}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//long long sum[1005],a[1005],ans,n,c;
//void dfs(int cur,long long x)
//{cout << cur << " ";
//	 if(x>c)return;
//	 
//	 if(sum[cur-1]+x<=c)
//	 {
//	  ans=max(ans,sum[cur-1]+x);
//	  return;
//	 }
//	 
//	 ans=max(ans,x);
//	 
//	 
//	 for(int i=1;i<cur;i++)
//	  {
//	  	dfs(i,x+a[i]);
//	  }
//	 return;
//}
//int main()
//{
//	 cin>>n>>c;
//	 
//	 for(int i=1;i<=n;i++)
//	 {
//	  cin>>a[i];
//	  sum[i]=sum[i-1]+a[i];
//	 }
//	 
//	 dfs(n+1,0);
//	 
//	 cout<<ans<<endl;
//	 
//	 return 0;
//}
