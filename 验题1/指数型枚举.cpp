#include<iostream>
using namespace std;

int n,m;
void dfs(int k,int sum,int state)
{
    if(sum+n-k<m) return ;  //ʣ�µ�δѡ��������m��;
    if(sum==m){
        for(int i=0;i<n;i++)
        if(state >> i & 1) printf("%d ",i+1);
        printf("\n");
        return ;
    }
    dfs(k+1,sum+1,state | 1 << k);  //ע��ݹ�˳��;
    
    dfs(k+1,sum,state);
}
int main()
{
    cin>>n>>m;  
    dfs(0,0,0);
    return 0;
}

