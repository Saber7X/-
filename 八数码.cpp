#include<bits/stdc++.h>
using namespace std;
const int N = 20; 
unordered_map<string, int> flag; //用作状态去重 

int start[N];
int End[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};

struct node{
	int f[N]; //记录状态
	int dis; //记录距离 
};

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

int bfs()
{
	node head;
	memcpy(head.f, start, sizeof start); //不能直接赋值就复制 
	head.dis = 0;
	
	string s = "";
	for (int i = 0; i < 9; i ++ )
	{
		s += (head.f[i] + '0');
	}
	flag[s] = 1;
	
	queue<node> q;
	q.push(head);
	
	while (!q.empty())
	{
		head = q.front();
		q.pop();
		int z; //线性坐标 
		for (z = 0; z < 9; z ++ ) 
		{
			if (head.f[z] == 0) break; //找到0的位置 
		}
		
		//算出二维坐标 
		int x = z / 3;
		int y = z % 3;
		 
		for (int i = 0; i < 4; i ++ )
		{
			int newx = x + xx[i];
			int newy = y + yy[i];
			if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3)
			{
				int newz = newx * 3 + newy;
				
				//符合要求就可以开新点了
				node newnode;
				memcpy(&newnode, &head, sizeof(struct node));//可能是因为要复制的是一整块所以要加& 
				swap(newnode.f[z], newnode.f[newz]); //交换后就是这整的新状态了 
				newnode.dis ++;
				
				if (memcmp(newnode.f, End, sizeof End) == 0)
				{
					return newnode.dis;
				}
				
				s = "";
				for (int i = 0; i < 9; i ++ )
				{
					s += (newnode.f[i] + '0');
				}
				if (flag[s] == 0)
				{
					flag[s] = 1;
					q.push(newnode);
				}
				
			}
		}
	}
	return -1;
}


int main()
{
	 for (int i = 0; i < 9; i ++ )
	 {
	 	char xx; cin >> xx;
	 	if (xx == 'x') start[i] = 0;
		else start[i] = xx - '0';
	 	
	 }
	 cout << bfs() << endl;
	return 0;
}
