#include<bits/stdc++.h>
using namespace std;
long long int num[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x=0;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>num[i];
        }
        sort(num,num+x);
        int sum=1;
        // int res=0;
        // while(1)
        // {
        //     if(abs(num[l]-num[r])>=maxn&&res==0)
        //     {
        //         sum+=2;
        //     }
        //     if(abs(num[l+1]-num[r])>=maxn)
        //     {
        //         l++;
        //         sum++;
        //     }
        //     if(abs(num[l]-num[r-1])>=maxn)
        //     {
        //         r--;
        //         sum++;
        //     }
        //     if(l>=r)break;
        // }
        long long int minn=10000000000;
        for(int i=1;i<x;i++)
        {
            long long int w=abs(num[i]-num[i-1]);
            if(w>=num[i]&&minn>=num[i])
            {
                sum++;
                minn=min(minn,w);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
