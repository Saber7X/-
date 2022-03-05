#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 550;

int n, m;
int g[N][N];//���
int d[N];//�浽���ľ���
bool st[N];

int dijkstra()
{
    memset(d, 0x3f3f3f3f, sizeof (d));
    d[1] = 0;
    for (int i = 1; i <= n; i ++ )
    {
        int t = -1;
        for (int j = 1; j <= n; j ++ )
        {
            if (!st[j] && (t == -1 || d[t] > d[j])) t = j; //ÿ���Ҿ�����С�ĵ�
        }
        st[t] = true;
        for (int j = 1; j <= n; j ++ )
        {
            d[j] = min(d[j], d[t] + g[t][j]);
        }
    }
    if (d[n] == 0x3f3f3f3f) return -1;
    else return d[n];
}

int main()
{
    memset(g, 0x3f3f3f3f, sizeof (g));
    cin >> n >> m;
    for (int i = 1; i <= m; i ++ )
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = min(g[a][b], c);//�����ر�
    }
    cout << dijkstra() << endl;
    return 0;
}
