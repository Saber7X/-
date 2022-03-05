//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<cstdio>
////#define int long long
//using namespace std;
//
//const int N = 100010;
//
//signed main()
//{
//	int n, m;
//	int f[N], v[N], s[N];int ff[N];
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0) break;
//		for (int i = 1; i <= n; i ++ ) cin >> v[i];
//		for (int i = 1; i <= n; i ++ ) cin >> s[i];
//		memset(f, -1, sizeof f);
//		f[0] = 1;
//		int ans = 0;
//		for (int i = 1; i <= n; i ++ )
//		{
//			for (int k = 1; k <= s[i]; k ++ )
//			{
//				
//				memcpy(ff, f, sizeof f);
//				for (int j = v[i]; j <= m ; j ++ )
//				{
//					if (ff[j - v[i]] != -1 && ff[j] == -1) //原本这里写的是v[i] * k，这就错了。。。应该是用一个物品的体积 
//					{
//						ans ++;
//						f[j] ++;
//					}
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int f[N], v[N], c[N], ff[N];
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0) break;
//		memset(v, 0, sizeof v);
		
		for (int i = 1; i <= n; i ++ ) scanf("%d", &v[i]);
		
		for (int i = 1; i <= n; i ++ ) scanf("%d", &c[i]);
		
		memset(f, 0, sizeof f);
		f[0] = 1;
		
		int ans = 0;
		
		for (int i = 1; i <= n; i ++ )
		{
//			cout << v[i] << ":   ";
			memset(ff, 0, sizeof ff);
			for (int j = v[i]; j <= m; j ++ )
			{
				if (!f[j] && f[j - v[i]] && ff[j - v[i]] < c[i])
				{
//					cout << j << " ";
					f[j] = 1;
					ff[j] = ff[j - v[i]] + 1;
					ans ++;
				}
			}
//			cout << endl;
		}
		
		cout << ans << endl;
	}
	return 0;
}

//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
// 
//int dp[100005];
//int sum[100005];
//int v[105],c[105];
// 
//int main()
//{
//	int i,j,k,n,m;
//	while(scanf("%d%d",&n,&m),n+m)
//	{
//		for(i=1;i<=n;i++)
//			scanf("%d",&v[i]);
//		for(i=1;i<=n;i++)
//			scanf("%d",&c[i]);
//		memset(dp,0,sizeof(dp));
//		dp[0]=1;//这里的dp数组起到的是标记的作用 
//		int ans=0;//记录组合数量 
//		for(i=1;i<=n;i++)
//		{
//			memset(sum,0,sizeof(sum));
//			cout << v[i] <<":  ";
//			for(j=v[i];j<=m;j++)//多重背包 
//			{
//				
//				if(!dp[j]&&dp[j-v[i]]&&sum[j-v[i]]<c[i])
//				{//在这个组合没出现过，且和它差v[i]的出现了，并且v[i]数目没有用完 
//					cout << j << " ";
//					dp[j]=1;
//					sum[j]=sum[j-v[i]]+1;
//					ans++;
//				}
//			}	
//			cout << endl;
//		}
//		printf("%d\n",ans);	
//	}	
//	return 0;
//} 
/*
6 9
1 2 4 5 7 8
1 2 1 1 1 1
*/
