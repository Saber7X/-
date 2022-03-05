#include<iostream>
#include<stdio.h>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout
using namespace std;
const int N = 2e5 + 10;
int h[N], e[N], w[N], ne[N], idx;

void add(int a, int b, int c)
{
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	
	h[a] = idx ++;
}
int n, m;

priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;

int dist1[N];
int dist2[N];

int dijkstra()
{
	memset(dist1, 0x3f3f3f3f, sizeof dist1);
	memset(dist2, 0x3f3f3f3f, sizeof dist2);
	q.push({0, 0});
	// �㣬 ����
	dist1[0]  = 0;
	while (!q.empty())
	{
		pair<int, int> t = q.top();
		q.pop();
		int v = t.first, d = t.second;
		// 
		if (dist2[v] < d) continue;
		for (int i = h[v]; i != -1; i = ne[i])
		{
			int j = e[i];
			int c = w[i];
			int d2 = d + c;
			//
			if (dist1[j] > d2) 
			{
				swap(dist1[j], d2);
				q.push({j, dist1[j]});
			}
			if (d2 > dist1[j] && d2 < dist2[j])
			{
				dist2[j] = d2; //
				q.push({j, dist2[j]});
			}
		}
	}
	return dist2[n - 1];
}

int main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b, c;
		cin >> a >> b >> c;
		add(a - 1, b - 1, c);
		add(b - 1, a - 1, c);
	}
	cout << dijkstra() << endl;
	return 0;
}
//#include <cstdio>
//#include <cstring>
//#include <queue>
//#include <algorithm>
//#define MAXN (5000 + 10)
//#define INF (5000*5000*2)
//using namespace std;
// 
//struct edge{
//    int to, cost;
//    edge(int tv = 0, int tc = 0):
//        to(tv), cost(tc){}
//};
//typedef pair<int ,int> P;
//int N, R;
//vector<edge> graph[MAXN];
//int dist[MAXN];     //��̾���
//int dist2[MAXN];    //�ζ̾���
// 
//void solve(){
//    fill(dist, dist+N, INF);
//    fill(dist2, dist2+N, INF);
//    //��С��������ȶ���
//    //ʹ��pair������edge�ṹ��
//    //����Ϊ�������ǲ���Ҫ���������
//    //pair����firstΪ���ؼ��ֽ�������
//    priority_queue<P, vector<P>, greater<P> > Q;
//    //��ʼ��Դ����Ϣ
//    dist[0] = 0;
//    Q.push(P(0, 0));
//    //ͬʱ������·�ʹζ�·
//    while(!Q.empty()){
//        P p = Q.top(); Q.pop();
//        //firstΪs->to�ľ��룬secondΪedge�ṹ���to
//        int v = p.second, d = p.first;
//        //��ȡ����ֵ���ǵ�ǰ��̾����ζ̾��룬��������
//        if(dist2[v] < d) continue;
//        for(unsigned i = 0; i < graph[v].size(); i++){
//            edge &e = graph[v][i];
//            int d2 = d + e.cost;
//            if(dist[e.to] > d2){
//                swap(dist[e.to], d2);
//                Q.push(P(dist[e.to], e.to));
//            }
//            if(dist2[e.to] > d2 && dist[v] < d2){
//                dist2[e.to] = d2;
//                Q.push(P(dist2[e.to], e.to));
//            }
//        }
//    }
//    printf("%d\n", dist2[N-1]);
//}
// 
//int main(){
//    int A, B, D;
//    scanf("%d%d", &N, &R);
//    for(int i = 0; i < R; i++){
//        scanf("%d%d%d", &A, &B, &D);
//        graph[A-1].push_back(edge(B-1, D));
//        graph[B-1].push_back(edge(A-1, D));
//    }
//    solve();
//    return 0;
//}
