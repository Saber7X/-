//#include<bits/stdc++.h>
//using namespace std;
//const int LEN = 362880;
//
//struct node{
//	int state[9]; //״̬ 
//	int dis; //���� 
//};
//
//int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}; //�ĸ���λ 
//
//int start[9];//��ʼ״̬ 
//int goal[9]={1, 2, 3, 4, 5, 6, 7, 8, 0};//Ŀ��״̬ 
//
//int visited[LEN] = {0};//ÿ��״̬��Ӧ�ļ�¼
//long long factory[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880}; //Cantor�õ��ĳ���
////��ž��ǽ������������״̬�ᱻ��¼ 
//bool Cantor(int str[], int n) //����չ������ 
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
//	memcpy(head.state, start, sizeof(head.state)); //����㸴�ƽ��ṹ������� 
//	head.dis = 0; //������Ϊ0 
//	queue<node> q;//������� 
//	Cantor(head.state, 9);//���������
//	q.push(head); //�����Ž����� 
//	
//	while (!q.empty())
//	{
//		head = q.front(); //ȡ����ͷ 
//		q.pop(); //���� 
//		int z; //��0��λ�� 
//		for (z = 0; z < 9; z ++ ) //��0��λ�� 
//		{
//			if (head.state[z] == 0) break;
//		}
//		int x = z % 3; // ������ 
//		int y = z / 3; // ������
//		for (int i = 0; i < 4; i ++ ) //��Ϊ�������ҵĵ�����Ƶ�������������ö��һ���������ҵ�λ�� 
//		{
//			int newx = x + dir[i][0]; //Ԫ��0ת�ƺ�������� 
//			int newy = y + dir[i][1]; //������ 
//			int nz = newx + 3 * newy; //ת��Ϊһά
//			if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3) //δԽ��
//			{
//				node newnode; //����һ���µ� 
//				memcpy(&newnode, &head, sizeof(struct node)); //��ת��ǰ��״̬���ƽ���״̬ 
//				swap(newnode.state[z], newnode.state[nz]); //Ȼ�󽻻�λ�� 
//				newnode.dis ++; //���¾��� 
//				if (memcmp(newnode.state, goal, sizeof(goal)) == 0) //�������Ŀ��״̬ 
//				{
//					return newnode.dis; // ����Ŀ��״̬ 
//				}
//				if (Cantor(newnode.state, 9)) //�ÿ���չ������
//				{
//					q.push(newnode);//���صĻ��ͷŽ����� 
//				} 
//			} 
//		}
//	}
//	return -1; //û�ҵ�����-1 
//}
//
//int main()
//{
////	for (int i = 0; i < 9; i ++ ) cin >> start[i]; //��ʼ״̬
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
////	for (int i = 0; i < 9; i ++ ) cin >> goal[i];//Ŀ��״̬ 
//	int num = bfs(); //����� 
//	if (num != -1) cout << num << endl;
//	else cout << "-1" << endl;
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
const int LEN = 362880;

struct node{
        int state[9]; //״̬ 
        int dis; //���� 
};

int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}; //�ĸ���λ 

int start[9];//��ʼ״̬ 
int goal[9]={1, 2, 3, 4, 5, 6, 7, 8, 0};//Ŀ��״̬ 

unordered_map<string, int> sss;

int bfs()
{
        node head;
        memcpy(head.state, start, sizeof(head.state)); //����㸴�ƽ��ṹ������� 
        head.dis = 0; //������Ϊ0 
        queue<node> q;//������� 
        string s = "";
        for (int i= 0; i < 9; i ++ )
        {
        	s += (head.state[i] % 10 + '0');
		}
		sss[s] = 1;
		
        q.push(head); //�����Ž����� 
        
        while (!q.empty())
        {
                head = q.front(); //ȡ����ͷ 
                q.pop(); //���� 
                int z; //��0��λ�� 
                for (z = 0; z < 9; z ++ ) //��0��λ�� 
                {
                        if (head.state[z] == 0) break;
                }
                int x = z % 3; // ������ 
                int y = z / 3; // ������
                for (int i = 0; i < 4; i ++ ) //��Ϊ�������ҵĵ�����Ƶ�������������ö��һ���������ҵ�λ�� 
                {
                        int newx = x + dir[i][0]; //Ԫ��0ת�ƺ�������� 
                        int newy = y + dir[i][1]; //������ 
                        int nz = newx + 3 * newy; //ת��Ϊһά
                        if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3) //δԽ��
                        {
                                node newnode; //����һ���µ� 
                                memcpy(&newnode, &head, sizeof(struct node)); //�Ѷ�ͷ���ƽ��µ� 
                                swap(newnode.state[z], newnode.state[nz]); //Ȼ�󽻻�λ�� 
                                newnode.dis ++; //���¾��� 
                                if (memcmp(newnode.state, goal, sizeof(goal)) == 0) //�������Ŀ��״̬ 
                                {
                                        return newnode.dis; // ����Ŀ��״̬ 
                                }
                                s = "";
						        for (int i= 0; i < 9; i ++ )
						        {
						        	s += (newnode.state[i] % 10 + '0');
								}
								if (sss[s] == 0)
								{
									q.push(newnode);//���صĻ��ͷŽ����� 
									sss[s] = 1;
								}
                        } 
                }
        }
        return -1; //û�ҵ�����-1 
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
        
        int num = bfs(); //����� 
        if (num != -1) cout << num << endl;
        else cout << "-1" << endl;
        return 0;
}
