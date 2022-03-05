#include<bits/stdc++.h> 
using namespace std;
const int N = 510;
int n, m, g[N][N], dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	for(int i = 0; i < n; i ++)//����n��
	{
		int t = -1;
		for(int j = 1; j <= n; j ++) 
		{
			if(! st[j] && (t == -1 || dist[t] > dist[j] ))//�ҵ������ߵĵ� 
			{
//				if(dist[t] > dist[j])
//				{
//					cout<<"��������2 ";
//					cout<<dist[t]<<" "<<dist[j]<<" ";
//				}
//				else
//				{
//					cout << "��������1 " ;
//				 } 
				t = j;
				
			}
//			cout << "j = " << j <<"   "<< "t == "<< t << "   "; 
		}
		cout<<endl;
		st[t] = true;
		
		for(int j = 1; j <= n; j ++)//ö�����о����õ�����ߵ�· ��Ȼ�������Сֵ 
		{	//cout << "dist[" << j << "] = " << dist[j] <<endl;
			dist[j] = min(dist[t] + g[t][j], dist[j]);
		
		}
	}
	
	if(dist[n] == 0x3f3f3f3f) return -1;
	return dist[n];
	
}

int main()
{
	memset(g, 0x3f, sizeof g);
	
	cin >> n >> m;
	while(m --)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	
	cout << dijkstra() << endl;
	return 0;
}
/*
5 10
1 2 2
5 3 3
4 1 8
2 4 3
4 5 7
5 2 3
3 4 1
1 2 9
3 2 3
1 2 8
*/
