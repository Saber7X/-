#include<iostream>
using namespace std;

int n,m;
void dfs(int k,int sum,int state)
{
    if(sum+n-k<m) return ;  //剩下的未选个数不足m个;
    if(sum==m){
        for(int i=0;i<n;i++)
        if(state >> i & 1) printf("%d ",i+1);
        printf("\n");
        return ;
    }
    dfs(k+1,sum+1,state | 1 << k);  //注意递归顺序;
    
    dfs(k+1,sum,state);
}
int main()
{
    cin>>n>>m;  
    dfs(0,0,0);
    return 0;
}

