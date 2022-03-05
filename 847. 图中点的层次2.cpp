#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 100005, M = N * 2;

int n, m;
int h[N], e[M], ne[M], idx;
int d[N];

queue<int> q;

void add(int a, int b)  // 添加一条边a->b
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}

void bfs()
{
    q.push(1);
    d[1] = 0;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        for (int i = h[t]; i != -1; i = ne[i] )
        {
            int j = e[i];
            if (d[j] == -1)
            {
                d[j] = d[t] + 1;
                q.push(e[i]);
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(h, -1, sizeof h);
    memset(d, -1, sizeof d);
    for (int i = 1; i <= m; i ++ )
    {
        int a, b; 
		cin >> a >> b;
        add(a, b);
    }
    bfs();//淦，居然没有调用函数 
    cout << d[n];
    return 0;
}
