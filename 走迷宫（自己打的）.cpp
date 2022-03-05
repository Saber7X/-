#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef pair<int, int> PII;

int n,m;
int g[100][100];//�����洢��ͼ
int d[105][105];//��¼�㵽���ľ���
PII q[11025];//��¼����

int bfs()
{   
    int hh=0,tt=0;
    q[0]={0,0};
    
    memset(d, -1, sizeof d);
    d[0][0]=0;
    
    
    int xx[4] ={-1, 0, 1, 0};
    int yy[4] ={0, 1, 0, -1};
    while(hh<=tt)//���зǿ�
    {
        auto t=q[hh++];
        
        for (int i = 0; i < 4; i ++ )
        {
            int x=t.first+xx[i];
            int y=t.second+yy[i];
            if( x>=0 && x<n && y>=0 && y<m && g[x][y] == 0 && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] +1;
                q[++tt] = {x,y};
            }
        }
        
    }
    return d[n-1][m-1];
    
}

int main()
{
    
    cin>> n>> m;
    for (int i = 0; i < n; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cin>>g[i][j];
        }
    }
    cout << bfs();
    return 0;
}

