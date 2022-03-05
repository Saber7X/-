//#include<bits/stdc++.h>
//using namespace std;
//const int LEN = 362880;
//
//struct node{
//	int state[9]; //状态 
//	int dis; //距离 
//};
//
//int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}; //四个方位 
//
//int start[9];//开始状态 
//int goal[9]={1, 2, 3, 4, 5, 6, 7, 8, 0};//目标状态 
//
//int visited[LEN] = {0};//每个状态对应的记录
//long long factory[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880}; //Cantor用到的常数
////大概就是进入过这个里面的状态会被记录 
//bool Cantor(int str[], int n) //康托展开判重 
//{
//	long result = 0;
//	for (int i = 0; i < n; i ++ ) 
//	{
//		int counted = 0;
//		for (int j = i + 1; j < n; j ++ )
//		{
//			if (str[i] > str[j]) ++ counted;
//		}
//		result += counted * factory[n - i - 1];
//	}
//	if (!visited[result])
//	{
//		visited[result] = 1;
//		return 1;
//	}
//	else return 0;
//}
//
//
//int bfs()
//{
//	node head;
//	memcpy(head.state, start, sizeof(head.state)); //把起点复制进结构体变量里 
//	head.dis = 0; //起点距离为0 
//	queue<node> q;//定义队列 
//	Cantor(head.state, 9);//用这个判重
//	q.push(head); //把起点放进队列 
//	
//	while (!q.empty())
//	{
//		head = q.front(); //取出对头 
//		q.pop(); //弹出 
//		int z; //记0的位置 
//		for (z = 0; z < 9; z ++ ) //找0的位置 
//		{
//			if (head.state[z] == 0) break;
//		}
//		int x = z % 3; // 横坐标 
//		int y = z / 3; // 纵坐标
//		for (int i = 0; i < 4; i ++ ) //因为上下左右的点可以移到这里来，所以枚举一下上下左右的位置 
//		{
//			int newx = x + dir[i][0]; //元素0转移后的新坐标 
//			int newy = y + dir[i][1]; //新坐标 
//			int nz = newx + 3 * newy; //转化为一维
//			if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3) //未越界
//			{
//				node newnode; //定义一个新点 
//				memcpy(&newnode, &head, sizeof(struct node)); //把转移前的状态复制进新状态 
//				swap(newnode.state[z], newnode.state[nz]); //然后交换位置 
//				newnode.dis ++; //更新距离 
//				if (memcmp(newnode.state, goal, sizeof(goal)) == 0) //如果到达目标状态 
//				{
//					return newnode.dis; // 到达目标状态 
//				}
//				if (Cantor(newnode.state, 9)) //用康托展开判重
//				{
//					q.push(newnode);//不重的话就放进队列 
//				} 
//			} 
//		}
//	}
//	return -1; //没找到返回-1 
//}
//
//int main()
//{
////	for (int i = 0; i < 9; i ++ ) cin >> start[i]; //初始状态
//	for (int i = 0; i < 9; i ++ )
//	{
//		char x; cin >> x;
//		if (x == 'x')
//		{
//			start[i] = 0;
//		}
//		else
//		{
//			start[i] = x - '0';
//		}
//	}
////	for (int i = 0; i < 9; i ++ ) cin >> goal[i];//目标状态 
//	int num = bfs(); //定义答案 
//	if (num != -1) cout << num << endl;
//	else cout << "-1" << endl;
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
const int LEN = 362880;

struct node{
        int state[9]; //状态 
        int dis; //距离 
};

int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}; //四个方位 

int start[9];//开始状态 
int goal[9]={1, 2, 3, 4, 5, 6, 7, 8, 0};//目标状态 

unordered_map<string, int> sss;

int bfs()
{
        node head;
        memcpy(head.state, start, sizeof(head.state)); //把起点复制进结构体变量里 
        head.dis = 0; //起点距离为0 
        queue<node> q;//定义队列 
        string s = "";
        for (int i= 0; i < 9; i ++ )
        {
        	s += (head.state[i] % 10 + '0');
		}
		sss[s] = 1;
		
        q.push(head); //把起点放进队列 
        
        while (!q.empty())
        {
                head = q.front(); //取出对头 
                q.pop(); //弹出 
                int z; //记0的位置 
                for (z = 0; z < 9; z ++ ) //找0的位置 
                {
                        if (head.state[z] == 0) break;
                }
                int x = z % 3; // 横坐标 
                int y = z / 3; // 纵坐标
                for (int i = 0; i < 4; i ++ ) //因为上下左右的点可以移到这里来，所以枚举一下上下左右的位置 
                {
                        int newx = x + dir[i][0]; //元素0转移后的新坐标 
                        int newy = y + dir[i][1]; //新坐标 
                        int nz = newx + 3 * newy; //转化为一维
                        if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3) //未越界
                        {
                                node newnode; //定义一个新点 
                                memcpy(&newnode, &head, sizeof(struct node)); //把队头复制进新点 
                                swap(newnode.state[z], newnode.state[nz]); //然后交换位置 
                                newnode.dis ++; //更新距离 
                                if (memcmp(newnode.state, goal, sizeof(goal)) == 0) //如果到达目标状态 
                                {
                                        return newnode.dis; // 到达目标状态 
                                }
                                s = "";
						        for (int i= 0; i < 9; i ++ )
						        {
						        	s += (newnode.state[i] % 10 + '0');
								}
								if (sss[s] == 0)
								{
									q.push(newnode);//不重的话就放进队列 
									sss[s] = 1;
								}
                        } 
                }
        }
        return -1; //没找到返回-1 
}

int main()
{
        for (int i = 0; i < 9; i ++ )
        {
                char x; cin >> x;
                if (x == 'x')
                {
                        start[i] = 0;
                }
                else
                {
                        start[i] = x - '0';
                }
        }
        
        int num = bfs(); //定义答案 
        if (num != -1) cout << num << endl;
        else cout << "-1" << endl;
        return 0;
}
