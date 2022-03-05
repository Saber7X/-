#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5,mod=1e9+7,INF=0x3f3f3f3f;
vector<int> h[N];
int dist[N],cnt[N];
bool st[N];
void bfs()			//求最短路及方案数
{
    memset(dist,0x3f,sizeof dist);
    queue<int> q;
    q.push(1);
    dist[1]=0;
    cnt[1]=1;
    while(q.size())
    {
        int u=q.front();
        q.pop();
        
        if(st[u]) continue;
        st[u]=true;
        
        for(int i=0;i<h[u].size();i++)
        {
            int v=h[u][i];
            if(dist[v]>dist[u]+1)		//求解的两种情况见上面的分析
            {
                dist[v]=dist[u]+1;
                cnt[v]=cnt[u];
                q.push(v);
            }
            else if(dist[v]==dist[u]+1)
                cnt[v]=(cnt[v]+cnt[u])%mod;
        }
    }
}
signed main()
{
    int n,m;
    scanf("%lld %lld",&n,&m);
    while(m--)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        h[u].push_back(v);
        h[v].push_back(u);
    }
    bfs();
    cout << cnt[n] << endl;
    return 0;
}
