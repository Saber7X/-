

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
        	//��ѡi����i-1,
			//ѡi���Ǻ�ͬһ��ǰ��ıȽϣ���ΪҪö�����������Ժ�ͬһ��ǰ�� �ıȽ� 
        	//���� f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i]);
            f[i][j]=f[i-1][j];
            if(j>=v[i])//��˼�����ٶ�Ž�һ��v[i]
            {
                f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
            }
        }
    }
    cout<<f[n][m];
    return 0;
}
