#include<bits/stdc++.h>
using namespace std;
const int N=105;
typedef pair<int,int> PII;

int n,m;
int g[N][N];//���ͼ 
int d[N][N];//ÿһ���㵽���ľ��� 
PII q[N*N];

int bfs()
{
	 int hh = 0, tt = 0;//��ʼ��ͷβΪ0  
	 q[0] = {0, 0};//��ʼ��pair��0��Ϊ0��0; 
	 
	 memset(d, -1, sizeof d);//��ʼ��ÿ���㵽���ľ���Ϊ-1 
	 d[0][0]= 0;//��ʼ����㵽���ľ���Ϊ0
	 
	 int dx[4] = {-1, 0, 1, 0,},dy[4]={0, 1, 0, -1};//�ĸ����� 
	 
	 
	 while(hh<=tt)//���зǿ� 
	 {
	 	auto t =q[hh++];//����tΪ����q[hh++],�൱��pair������ ��������һ�������չ 
	 	
	 	for(int i=0;i<4;i++)//ö���ĸ����� 
	 	{
	 		int x= t.first + dx[i];
			int y= t.second + dy[i];
	 		if(x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
	 		{
	 			d[x][y] = d[t.first][t.second] +1;//���µ�ǰ�㵽���ľ���
	 			q[++tt] = {x,y};//�ѵ�ǰ��չ�ĵ������� 
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
