#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10, mod = 998244353;
int n,m;//范围，位数 
int res[N]={0};
int ans[N]={1};//因为是从1开始，所以都赋值为1； 
int a[N];
bool st[N];
int sumn;

//void dfs(int u)
//{
//	
//	if(u>m)
//	{
//		int cnt = 1;
//		for(int i=1;i<=m;i++)
//		{
//			cnt *= a[ans[i]];
//			cnt %= mod; 
////			cout<<ans[i]<<" ";
//		}
////		cout<<endl;
//		sum += cnt;
//		sum %= mod;
//		return;
//	 }
//	
//		
//	//模板 
//	for(int i=ans[u-1];i<=n;i++)//因为要用字典序，所以从上一个用过的数开始遍历 
//	{
//		if(res[i]==0)
//		{
//			ans[u]=i;
//			res[i]=1;
//			dfs(u+1);
//			res[i]=0;
//		}
//	}
//	
//}
//void dfs(int k,int sum,int state)
//{
//    if(sum+n-k<m) return ;  //剩下的未选个数不足m个;
//    if(sum==m)
//	{
//		int cnt = 1;
//		int s = 0;
//        for(int i=0;i<n;i++)
//        {
//        	
//        	if(state >> i & 1)
//			{
//				s ++;
//				cnt *= a[i + 1];
//				cnt %= mod;
//			}
//		}
//		if (s == m)
//		{
//			sumn += cnt;
//			sumn %= mod;
//		}
//		
//        return ;
//    }
//    dfs(k+1,sum+1,state | 1 << k);  //注意递归顺序;
//    
//    dfs(k+1,sum,state);
//}
//void dfs(int u, int s)
//{
//    if (s > m) return;                      //跳过重复数字时累加的s可能会大于m，为无效方案
//    if (s == m)                             //选择个数恰好等于m时输出方案
//    {
//    	int cnt = 1;
//        for (int i = 0; i < n; i ++ )
//        {
//	        if (st[i])
//            {
//            	cnt *= a[i];
//            	cnt %= mod;
////            	cout << a[i] << ' ';
//			}
//		}
//            
//        
//        sumn += cnt;
//        sumn %= mod;
////       cout << endl;
//        return;
//    }
//
//    if (u == n) return;                     //已经遍历了所有数，返回
//
//    int k = u;
//    while (k < n && a[k] == a[u]) st[k ++ ] = true, s ++ ;  //先把最小的输出，拉满
//
//    dfs(k, s);
//
//    for (int i = k - 1; i >= u; i -- )      //倒过来恢复现场
//    {
//        st[i] = false;
//        s -- ;
//        dfs(k, s);
//    }
//}

void dfs(int k,int sum,int state)
{
    if(sum+n-k<m) return ;  //剩下的未选个数不足m个;
    if(sum==m){
    	int cnt = 1;
        for(int i=0;i<n;i++)
        {
        	if(state >> i & 1) 
			{
//				cnt *= a[i];
//				cnt %= mod;
				printf("%lld ",a[i+1]);
			}
		}
//        sumn += cnt;
//        sumn %= mod;
        printf("\n");
        return ;
    }
    dfs(k+1,sum+1,state | 1 << k);  //注意递归顺序;
    
    dfs(k+1,sum,state);
}
signed main()
{
	cin>>n>>m;
	for (int i = 0; i < n; i ++ ) scanf("%lld", &a[i]);
	dfs(0, 0, 0);
//	cout << sumn << endl;
	return 0;
}
