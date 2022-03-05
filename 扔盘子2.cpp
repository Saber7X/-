#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
#include<math.h>
#include<map>
#include<vector>
#include<stack>
#include<iostream>
#define inf 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int N=50005;
 
int w[N]={inf};
 
int main()
{
    int m,n;
    while(~scanf("%d %d",&n,&m))
    {
        int i,j,ans=0,e;
        for(i=1;i<=n;i++)
        {
            scanf("%d",w+i);
            if(w[i]>w[i-1])
                w[i]=w[i-1];
        }
//        for(i=1;i<=n;i++)
//            printf("%d ",w[i]);
//        printf("\n");
        int t=n;
        for(i=1;i<=m;i++)
        {
            scanf("%d",&e);
            for(;t>0;t--)
            {
                if(w[t]>=e)
                {
                    t--;
                    ans++;
                    break;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

