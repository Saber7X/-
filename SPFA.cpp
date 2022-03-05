#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;
const int N = 1e5 + 10;

int n, m;
bool st[N];
int e[N], w[N], h[N], ne[N], idx;
int d[N];

void add(int a, int b, int c)
{
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

int spfa()
{
    memset(d, 0x3f, sizeof d);
    d[1] = 0;
    
    queue<int> q;
    q.push(1);
    
    st[1] = 1;
    
    while (q.size())
    {
        int t = q.front();
        q.pop();
        
        st[t] = 0;
        
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i], ww = w[i];
            if (d[j] > d[t] + ww)
            {
                d[j] = d[t] + ww;
                if (!st[j]) 
				{
					q.push(j);
                	st[j] = 1;
				}
            }
        }
    }
    if (d[n] == 0x3f3f3f3f ) return -1;
    else return d[n];
}




int main()
{
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for (int i = 1; i <= m; i ++ )
    {
        int a, b, c; 
		cin >> a >> b >> c;
        add(a, b, c);
    }
    int t = spfa();
    if (t == -1) cout << "impossible" << endl;
    else cout << t << endl;
    return 0;
}
