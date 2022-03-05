#include<bits/stdc++.h>
using namespace std;
int n;
bool res[10]={0};
int ans[10];
void dfs(int u)
{
    if(u>n)
    {
        for(int i=1;i<=n;i++)
        {
          if(res[i]==1)
          {
              printf("%d",i);
          }
        }
        printf("\n");
    }
    res[u]=2;
    dfs(u+1);
    res[u]=0;
    
    res[u]=1;
    dfs(u+1);
    res[u]=0;
}

int main()
{
    
    cin>>n;
    dfs(1);
    return 0;
}
