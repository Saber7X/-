//f ËÑË÷
#include<bits/stdc++.h>
#define endl '\n' 
// #define int long long
using namespace std;
const int N = 2e5+10;
typedef long long ll;

int start[4];
int End[4];

struct node{
    int f[4];
};

string change(int a[])
{
    string s = "";
    for (int i = 0; i < 4; i ++ )
    {
        s.push_back(a[i] + '0');
    }
    return s;
}
int caozuo[20][4] ={{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 1, 0}, {1, 1, 1, 1}, {0, 1, 0, 0},  {0, 1, 1, 0}, {0, 1, 1, 1}, {0, 0, 1, 0}, {0, 0, 1, 1}, {0, 0, 0, 1}, {-1, 0, 0, 0}, {-1, -1, 0, 0}, {-1, -1, -1, 0}, {-1, -1, -1, -1}, {0, -1, 0, 0},  {0, -1, -1, 0}, {0, -1, -1, -1}, {0, 0, -1, 0}, {0, 0, -1, -1}, {0, 0, 0, -1}};


int kuozhan(queue<node>& q, unordered_map<string, int>& ma, unordered_map<string, int>& mb)
{
    int d = ma[change(q.front().f)];
    while (!q.empty() && ma[change(q.front().f)] == d)
    {
        node t;
        t = q.front();
        q.pop();

        for (int i = 0; i < 20; i ++ )
        {
            node newnode;
            memcpy(newnode.f, t.f, sizeof t.f);
            for (int j = 0; j < 4; j ++ )
            {
                newnode.f[j] += caozuo[i][j];
            }
            string z = change(newnode.f);
            if (mb.count(z)) return d + 1 + mb[z];
            if (ma.count(z)) continue;
            ma[z] = d + 1;
            q.push(newnode);
        }
    }
    return -1;
}

int bfs()
{
    queue<node> qa, qb;
    unordered_map<string, int> ma, mb;
    node head;
    memcpy(head.f, start, sizeof start);
    ma[change(head.f)] = 0;
    qa.push(head);
    memcpy(head.f, End, sizeof End);
    mb[change(head.f)] = 0;
    qb.push(head);

    while (!qa.empty() && !qb.empty())
    {
        int temp = -1;
        if (qa.size() >= qb.size())
        {
            temp = kuozhan(qa, ma, mb);
        }
        else
        {
            temp = kuozhan(qb, mb, ma);
        }
        if (temp != -1)
        {
            return temp;
        }
    }
    return -1;
}

signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        for (int i = 0; i < 4; i ++ )
        {
            scanf("%1d", &start[i]);
            // cin >> start[i];
        }
        for (int i = 0; i < 4; i ++ )
        {
            scanf("%1d", &End[i]);
            // cin >> End[i];
        }
        cout << bfs() << endl;
    }
    return 0;
}
