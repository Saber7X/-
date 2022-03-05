#include<bits/stdc++.h>
using namespace std;
int num[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    for(int aa = 1; aa <= t; aa ++)
    {
        int n,k;
        long long int m;
        cin>>n>>k>>m;
        map<int,int>res;
        map<int,int>flag;
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
            res[num[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            flag[num[i]]++;
            if(res[num[i]]%2==0)
            {
                if(flag[num[i]]%2==1)//第一次出现
                {
                    cout<<"0";
                }
                if(flag[num[i]]%2==0)//第二次出现
                {
                    int ans = m/n;
                    if(m%n!=0 && i < m%n)
                    {
                        ans++;
                    }
                    cout<<ans;
                }
                
            }
            else  if(res[num[i]]%2!=0)
            {
                if(flag[num[i]]%2!=0)//第一次出现
                {
                    int ans = m/n;
                    if(m%n!=0 && i < m%n)
                    {
                        ans++;
                    }
                    cout<<ans/2;
                }
                else if(flag[num[i]]%2==0)//第二次出现
                {
                    int ans = m/n;
                    if(m%n!=0 && i < m%n)
                    {
                        ans++;
                    }
                    ans++;
                    cout<<ans/2;
                }
                
            }
            if(i<n-1)
            {
                cout<<" ";
            }
        }
        if(aa!=t)
        {
            cout<<endl;
        }
    }
    return 0;
}

