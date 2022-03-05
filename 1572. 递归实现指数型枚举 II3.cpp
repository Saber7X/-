#include<bits/stdc++.h>
using namespace std;
int n;
int res[100]={0};
int num[100];

map<string,int> res1;

void dfs(int u)
{
    if(u<1)
    {
        string s="";
        for(int i=n;i>=1;i--)
        {
            if(res[i]==2)
            {
                s+=num[i]-'0';
            }
        }
        sort(s.begin(),s.end());
        if(res1[s]==0)
        {
            int num1[100]={0};
            int cnt=0;
            for(int i=n;i>=1;i--)
            {
                if(res[i]==1)
                {
                	num1[cnt++]=num[i];
				}
            }
			res1[s]=1;
            sort(num1,num1+cnt);
            for(int i=0;i<cnt;i++)
            {
            	cout<<num1[i]<<" ";
			}
			cout<<endl;
        }
        return;
    }
    
    res[u]=2;
    dfs(u-1);
    res[u]=0;
    
    res[u]=1;
    dfs(u-1);
    res[u]=0;
}

int  main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    dfs(n);
    return 0;
}
