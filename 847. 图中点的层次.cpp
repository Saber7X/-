#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

int n, m;
int e[N], ne[N], h[N], idx;

int q[N], d[N];//队列，当前点到起点的距离 

void add(int a, int b)//加边，不带权 
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx ++;
}

int bfs()
{
	memset(d, -1, sizeof d);
	q[0] = 1;//把第一个点放进队列 
	int hh = 0, tt = 0;
	d[1] = 0;//第一个点到起点的距离为0 
	
	while(hh <= tt)//手动模拟队列 
	{
		int t = q[hh ++] ;//取出队头 
		
		for(int i = h[t]; i != -1; i = ne[i])//模板 
		{
			int j = e[i];
			
			if(d[j] == -1)//如果没有走过 
			{
				d[j] = d[t] + 1;//更新当前点到起点的距离 
				
				q[++tt] = j;//放入队列 
			}
		}
	}
	return d[n];
}




int main()
{
	memset(h, -1, sizeof h);
	
	cin >> n >> m;
	for(int i = 1;i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
	}
	cout << bfs() <<endl;
	return 0;
}
