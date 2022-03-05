#include <cstdio>
#include <cstring>
#define N 1000010
int const mod=1e9+7;
inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
    return x*f;
}
int n,a[N],last[N],h[N],dp[N];
int main(){
//  freopen("a.in","r",stdin);
    while(~scanf("%d",&n)){
        memset(h,0,sizeof(h));
        for(int i=1;i<=n;++i){
            a[i]=read();
            last[i]=h[a[i]];h[a[i]]=i;
        }
        for(int i=1;i<=n;++i){
            if(!last[i]) dp[i]=dp[i-1]*2+1;
            else dp[i]=dp[i-1]+dp[i-1]-dp[last[i]-1];
            if(dp[i]<0) dp[i]+=mod;
            dp[i]%=mod;
        }
        printf("%d\n",dp[n]);
    }
    return 0;
}
