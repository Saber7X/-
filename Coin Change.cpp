//#include<bits/stdc++.h> 
//using namespace std;
//const int money = 251;
//int f[money] = {0};
//int a[5] = {1, 5, 10, 25, 50};
//void solve()
//{
//	f[0] = 1;
//	for (int i = 0; i < 5; i ++ )
//	{
//		for (int j = a[i]; j < money; j ++ )
//		{
//			f[j] = f[j] + f[j - a[i]];
//		}
//	}
//}
//int main()
//{
//	int n;
//	solve();
//	while (cin >> n)
//	{
//		cout << f[n] << endl;
//	}
//	
//	return 0; 
//}

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long t;
    while(scanf("%lld",&t)!=EOF)
    {
        int a[10],i,j;
        int dp[50000];
        memset(dp,0,sizeof(dp));//对dp数组先进行清零
        a[1]=1;
        a[2]=5;
        a[3]=10;
        a[4]=25;
        a[5]=50;//把每种硬币直接存储到一个数组中去
        dp[0]=1;
        for(i=1;i<=5;i++)
        {
            for(j=a[i];j<=t;j++)
            {
                dp[j]=dp[j]+dp[j-a[i]];
            }
        }
        printf("%d\n",dp[t]);
    }
}

