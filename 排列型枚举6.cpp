#include<bits/stdc++.h>
using namespace std;
int n,m;//��Χ��λ�� 
bool res[30]={0};
int ans[30];
void dfs(int u)
{
    if(u>n)//����λ��ʱ 
    {
        for(int i=1;i<=n;i++)//����λ�� 
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;//�����ϲ� 
    }
    for(int i=1;i<=n;i++)//��Χ�ڱ������� ��������� 
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
    scanf("%d",&n);//��Χ��λ�� 
    dfs(1);
    
    return 0;
}

