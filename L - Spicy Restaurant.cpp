//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <map>
//
//using namespace std;
//
//const int N = 100005, M = 2000010, INF = 1000000000;
//
//int w[N];
//int n, m, yy;
//int dist[N], q[N];      // dist表示每个点到起点的距离, q 是队列
//int h[N], e[M], v[M], ne[M], idx;       // 邻接表
//bool st[N];     // 存储每个点是否在队列中
//
//void add(int a, int b, int c)
//{
//    e[idx] = b, v[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//
//void spfa()
//{
//    int hh = 0, tt = 0;
//    for (int i = 1; i <= n; i++) dist[i] = INF;
//    dist[1] = 0;
//    q[tt++] = 1, st[1] = 1;
//    while (hh != tt)
//    {
//        int t = q[hh++];
//        st[t] = 0;
//        if (hh == n) hh = 0;
//        for (int i = h[t]; i != -1; i = ne[i])
//            if (dist[e[i]] > dist[t] + v[i])
//            {
//                dist[e[i]] = dist[t] + v[i];
//                if (!st[e[i]])
//                {
//                    st[e[i]] = 1;
//                    q[tt++] = e[i];
//                    if (tt == n) tt = 0;
//                }
//            }
//    }
//}
//
//int main()
//{
//    memset(h, -1, sizeof h);
//    map <int, int> res22;
//    cin >> n >> m >> yy;
//    for(int i = 0; i <n; i ++)
//    {
//        cin >> w[i];
//        res22[w[i]] = i + 1;
//    }
//    for (int i = 0; i < m; i++)
//    {
//        int a, b;
//        cin >> a >> b;
//        add(a, b, 1);
//        add(b, a, 1);
//    }
//    spfa();
//    sort(w, w + n );
//    // for(int i=0;i<=n+1;i++)
//    // {
//    //     cout<<w[i]<<" ";
//    // }
//    //cout<<endl;
//    while(yy--)
//    {
//        int a, b;
//        cin >> a >> b;
//        int ss=0;
//        int xx=0;
//        if(w[0]>b)
//        {
//            ss=-1;
//        }else if(w[n-1]<b)
//        {
//            ss=n-1;
//        }else{
//            for(int i=0;i<n;i++)
//            {
//                if(w[i]==b&&xx==0)
//                {
//                    ss=i;
//                    xx++;
//                }
//                if(w[i]>b)
//                {
//
//                    ss=min(ss,i-1);
//                    break;
//                }
//            }
//        }
//        //int ss=lower_bound(w,w+n,b)-w;
//        //if()
//        //要找的数,排序后的下标,找到的数，在原数组中的下标
//        //cout<< b <<" "<<ss<<" "<<w[ss]<<" "<<res22[ w[ss ] ]<<endl;
//        if( ss == -1 || ss >=n||(ss==0&&w[ss]>b))
//        {
//            cout << "-1" <<endl;
//            continue;
//        }
//        int x = a, y = res22[ w[ss] ];
//        if(x == y)
//        {
//            cout<<"0"<<endl;
//            continue;
//        }
//        
//       // cout<< "ans = "<<abs(dist[x] - dist[y]) <<endl;
//       cout<<abs(dist[x] - dist[y]) <<endl;
//    }
//    return 0;
//}


