#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef pair<int, int> PII;

int n,m;
int g[100][100];//用来存储地图
int d[105][105];//记录点到起点的距离
PII q[11025];//记录坐标

int bfs()
{   
    int hh=0,tt=0;
    q[0]={0,0};
    
    memset(d, -1, sizeof d);
    d[0][0]=0;
    
    
    int xx[4] ={-1, 0, 1, 0};
    int yy[4] ={0, 1, 0, -1};
    while(hh<=tt)//队列非空
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

