#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n<=0||m<=0)
        {
            break;
        }
        int minn=min(m,n);
        int maxn=max(m,n);
        int sum=0;
        for(int i=minn;i<=maxn;i++)
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}
