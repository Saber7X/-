#include<bits/stdc++.h>
using  namespace std;
int yunsuan(int a,int b)
{
    return a ^ b;
}
int main()
{
    int num[20001]={0};
    int n,m;
    scanf("%d %d",&n,&m);//n朵花,m个问题
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int s,k;
    while(m--)
    {
        int maxn=-111;
        scanf("%d %d",&s,&k);
        if(s==k)
        {
            printf("0");
        }
        else
        {
            for(int i=s-1;i<k;i++)
            {
                for(int j=i+1;j<k;j++)
                {
                	
                    maxn=max(maxn,yunsuan(num[i],num[j]));
                }
            }
            printf("%d",maxn);
        }
         
        if(m!=0)
        {
            printf("\n");
         }
    }
    return 0;
}
