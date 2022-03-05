#include<bits/stdc++.h>
using namespace std;
int num[105][105];
int n,m;
int u=1;
void up(int x,int y)
{
    int a,b;
    for(int i=x-1;i>=0;i--)
    {
        if(num[i][y]==0)
        {
            num[i][y]=u;
            u++;
            a=i;
            b=y;
        }
    }
}
void zuo(int x,int y)
{
    int a,b;
    for(int i=y-1;i>=0;i--)
    {
        if(num[x][i]==0)
        {
            num[x][i]=u;
            u++;
            a=x;
            b=i;
        }
    }
    up(a,b);
}
void xia(int x,int y)
{
    int a,b;
    for(int i=x+1;i<n;i++)
    {
        if(num[i][y]==0)
        {
            num[i][y]=u;
            u++;
            a=i;
            b=y;
        }
    }
    zuo(a,b);
}
void you(int x,int y)
{
    int a,b;
    for(int i=y;i<m;i++)
    {
        if(num[x][i]==0)
        {
            num[x][i]=u;
            u++;
            a=x;
            b=i;
        }
    }
    xia(a,b);
    
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(num[i][j]==0)
            {
                you(i,j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
