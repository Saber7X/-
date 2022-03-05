#include<bits/stdc++.h>
using namespace std;
int num[15];
int t[15];
int w[15];
int dp[55];
int main()
{
    //n题 时间不同 m作业 作业时间和分值不同 k分及格 r个单位时间
    //k分及格，时间最少
    //喜欢的时间排序即可
    int n,m,k,r;
    cin>>n>>m>>k>>r;
    for(int i=0;i<n;i++)//每道题的时间 
    {
        scanf("%d",&num[i]);
    }
    sort(num,num+n);
    for(int i=1;i<=m;i++)//每门课的时间 
    {
        scanf("%d",&t[i]);
    }
    for(int i=1;i<=m;i++)//每门课的分数 
    {
        scanf("%d",&w[i]);
    }
    int minn=0;
    int res=0;
    //枚举前i个题时间为j时的分数，到最后是m个题j分钟可以拿几分 
    for(int i=1;i<=m;i++)
    {
        for(int j=r;j>=t[i];j--)//时间 
        {

             dp[j]=max(dp[j],dp[j-t[i]]+w[i]);
        }
    }
    for(int i=1;i<=r;i++)//枚举m道题n分钟可拿几分，从小到大，一旦分数及格，就跳出，并减去写作业时间 
    {
        if(dp[i] >= k)//可以及格了
        {
            minn = r - i;//已经写作业花去的时间不能刷题了
            break;
        }
    }
    //cout<<minn<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        minn-=num[i];
        if(minn>0)
        {
            sum++;
        }else{
            break;
        }
    }
    cout<<sum;
    return 0;
}

