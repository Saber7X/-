

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int v[1005],w[1005],f[1005][1005]={0};
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
        
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
        	//不选i就是i-1,
			//选i就是和同一层前面的比较，因为要枚举数量，所以和同一层前面 的比较 
        	//方程 f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i]);
            f[i][j]=f[i-1][j];
            if(j>=v[i])//意思是能再多放进一个v[i]
            {
                f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
            }
        }
    }
    cout<<f[n][m];
    return 0;
}
