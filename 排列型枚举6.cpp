#include<bits/stdc++.h>
using namespace std;
int n,m;//范围，位数 
bool res[30]={0};
int ans[30];
void dfs(int u)
{
    if(u>n)//大于位数时 
    {
        for(int i=1;i<=n;i++)//遍历位数 
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;//返回上层 
    }
    for(int i=1;i<=n;i++)//范围内遍历找数 ，并作标记 
    {
        if(res[i]==0)
        {
            ans[u]=i;
            res[i]=1;
            dfs(u+1);
            res[i]=0;
        }
    }
    
}


int main()
{
    scanf("%d",&n);//范围，位数 
    dfs(1);
    
    return 0;
}

