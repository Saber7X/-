#include<bits/stdc++.h>
#define endl '\n' 
#define int long long
using namespace std;
const int N = 2e5+10;
typedef long long ll;
signed main()
{
	freopen("ball.in","r",stdin);
    freopen("ball.out","w",stdout); 
    
    int n,m;
    cin>>n>>m;
    map<int,int>numx;
    map<int,int>numy;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        numx[q]++;
    }
    for(int i=0;i<m;i++)
    {
        int q;
        cin>>q;
        numy[q]++;
    }
    int ans=0;
    for(auto x:numx)
    {
        ans+=min(x.second,numy[x.first]);
    }
    cout<<ans<<endl;
    fclose(stdin);//关闭重定向输入
    fclose(stdout);//关闭重定向输出
    return 0;
}

