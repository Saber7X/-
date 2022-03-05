//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//	int a[10005];
//	int dp[10005];
//    for(int i=1;i<=n;i++)
//	{
//        cin>>a[i];
//    }
//    int maxn=-1; 
//    for(int i=1;i<=n;i++)//枚举第i子序列 
//	{
//        dp[i]=a[i];//如果只有它一个的话就是它本身 
//      	for(int j=1;j<=i;j++)//枚举前i个数 
//		{
//        	if(dp[j]+a[i]>dp[j]&&a[j]<a[i])//如果是上升的话 
//        	{
//        		dp[i]=dp[j]+a[i];
//			}
//			maxn=max(maxn,dp[i]);
//			//cout<<dp[i]<<endl;
//        }
//        
//        
//  	}  	
//    cout<<maxn;
//    return 0;
//}
//    
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int a[100005];
	int dp[100005];
    int maxn=-1; 
    for(int i=1;i<=n;i++)//枚举第i子序列 
	{
		cin>>a[i];
        dp[i]=a[i];//如果只有它一个的话就是它本身 
      	for(int j=1;j<i;j++)//枚举前i个数 
		{
        	if(dp[j]+a[i]>dp[j]&&a[j]<a[i])//如果是上升的话 
        	{
        		dp[i]=dp[j]+a[i];
			}
			
			//cout<<dp[i]<<endl;
        }
        maxn=max(maxn,dp[i]);
        
  	}  	
    cout<<maxn;
    return 0;
}
