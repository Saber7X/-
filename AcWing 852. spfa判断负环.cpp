#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 100005;

int n, m;
int e[N], ne[N], h[N], w[N], idx, cnt[N];
int dist[N];
bool st[N];

void add(int a, int b, int c)  // 添加一条边a->b，边权为c
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

bool spfa()
{
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    
    queue<int> q;
    for(int i = 1; i <= n; i ++ )
    {
    	st[i] = true;
    	q.push(i);
	}
    
    while(q.size())
    {
        int t = q.front();//取出队头
        q.pop();
        
        st[t] = false;
        
        for(int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            
            if(dist[j] > dist[t] + w[i])
            {
                dist[j] = dist[t] + w[i];
                cnt[j] = cnt[t] + 1;
            
	            if(cnt[j] >= n) return true;
	            if(!st[j]) 
	            {
	                q.push(j);
	                st[j] = true;
	            }
			}
        }
    }
    return false;
}
int main()
{
    scanf("%d%d", &n, &m);
 
    memset(h, -1, sizeof h);
 
    while (m -- )
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }
    
    if(spfa())
    {
    	cout << "Yes";
	}
	else
	{
		cout<<"No";
	}
    return 0;
}
