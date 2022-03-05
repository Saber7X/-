#include<bits/stdc++.h>
using namespace std;
int n;
void bfs(int u)
{
    if(u>n)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",ans[i]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(res[i]==0)
        {
            res[i]=1;
            ans[u]=i;
            dfs(u+1);
            res[i+1]=0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}
