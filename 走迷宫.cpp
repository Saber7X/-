#include<bits/stdc++.h>
using namespace std;
const int N=105;
typedef pair<int,int> PII;

int n,m;
int g[N][N];//存地图 
int d[N][N];//每一个点到起点的距离 
PII q[N*N];

int bfs()
{
	 int hh = 0, tt = 0;//初始化头尾为0  
	 q[0] = {0, 0};//初始化pair第0组为0，0; 
	 
	 memset(d, -1, sizeof d);//初始化每个点到起点的距离为-1 
	 d[0][0]= 0;//初始化起点到起点的距离为0
	 
	 int dx[4] = {-1, 0, 1, 0,},dy[4]={0, 1, 0, -1};//四个方向 
	 
	 
	 while(hh<=tt)//队列非空 
	 {
	 	auto t =q[hh++];//定义t为数组q[hh++],相当于pair的索引 ，进行下一个点的扩展 
	 	
	 	for(int i=0;i<4;i++)//枚举四个方向 
	 	{
	 		int x= t.first + dx[i];
			int y= t.second + dy[i];
	 		if(x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
	 		{
	 			d[x][y] = d[t.first][t.second] +1;//更新当前点到起点的距离
	 			q[++tt] = {x,y};//把当前拓展的点放入队列 
			}
		}
	 }
	 return d[n-1][m-1];
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
		}
	}
	cout<<bfs()<<endl;
	return 0;
}
