#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

int n, m;
int e[N], ne[N], h[N], idx;

int q[N], d[N];//���У���ǰ�㵽���ľ��� 

void add(int a, int b)//�ӱߣ�����Ȩ 
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx ++;
}

int bfs()
{
	memset(d, -1, sizeof d);
	q[0] = 1;//�ѵ�һ����Ž����� 
	int hh = 0, tt = 0;
	d[1] = 0;//��һ���㵽���ľ���Ϊ0 
	
	while(hh <= tt)//�ֶ�ģ����� 
	{
		int t = q[hh ++] ;//ȡ����ͷ 
		
		for(int i = h[t]; i != -1; i = ne[i])//ģ�� 
		{
			int j = e[i];
			
			if(d[j] == -1)//���û���߹� 
			{
				d[j] = d[t] + 1;//���µ�ǰ�㵽���ľ��� 
				
				q[++tt] = j;//������� 
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
