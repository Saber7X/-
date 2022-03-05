//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//#include <cstdio>
//using namespace std;
//const int N = 150;
//int a, b, c;
//
//int d[N][N];
//
//struct name
//{
//	int aa, bb;
//	string s;//操作步骤 
//}num[N];
//int flag[N];
//void bfs()
//{
//	queue<int> q;
//	q.push(0);
//	for (int i = 0; i <= 149 ;i ++ )
//	{
//		for (int j = 0; j <= 149; j ++ ) 
//		{
//			d[i][j] = -1;
//		}
//	}
//	d[0][0] = 0;
//	int cnt = 1;
//	while (!q.empty())
//	{
//		int t = q.front();
//		cout << t << endl;
//		q.pop();
//		int a1 = num[t].aa;
//		int b1 = num[t].bb;
//		if (a1 == c || b1 == c) 
//		{
//			vector<int> ans;
//			int v = t;
//			while (v != 0)
//			{
//				cout << v << " ";
//				ans.push_back(v);
//				v = flag[v];
//			}
//			cout << endl;
//			for (int i = ans.size() - 1; i >= 0; i -- )
//			{
//				cout << num[ans[i]].s<< endl;
//			}
//			break;
//		}
//		int x, y; string ss = "";
//		
//		if (a1 < a) //填满A 
//		{
//			x = a;
//			y = b1;
//			ss = "FILL(1)";
//			if (d[x][y] == -1)
//			{
//				num[cnt].aa = x;
//				num[cnt].bb = y;
//				num[cnt].s = ss;
//				q.push(cnt);
//				cnt ++;
//				d[x][y] = t; //记录一下上一步 
//				flag[cnt - 1] = t;cout<<cnt-1 <<ss<<"1: " << x << " " << y << "     ";
//			}
//			
//		}
//		
//		if (b1 < b) //填满B 
//		{
//			x = a1;
//			y = b;
//			ss = "FILL(2)";
//			if (d[x][y] == -1)
//			{
//				num[cnt].aa = x;
//				num[cnt].bb = y;
//				num[cnt].s = ss;
//				q.push(cnt);
//				cnt ++;
//				d[x][y] = t; //记录一下上一步 
//				flag[cnt - 1] = t;cout<<cnt-1<<ss <<"2: " << x << " " << y << "     ";
//			}
//			
//		}
//		
//		if (a1 > 0) //清空A 
//		{
//			x = 0;
//			y = b1;
//			ss = "DROP(1)";
//			if (d[x][y] == -1)
//			{
//				num[cnt].aa = x;
//				num[cnt].bb = y;
//				num[cnt].s = ss;
//				q.push(cnt);
//				cnt ++;
//				d[x][y] = t; //记录一下上一步
//				flag[cnt - 1] = t; cout<<cnt-1<<ss <<"3: " << x << " " << y << "     ";
//			}
//			
//		}
//		
//		if (b1 > 0) //清空B 
//		{
//			x = a1;
//			y = 0;
//			ss = "DROP(2)";
//			if (d[x][y] == -1)
//			{
//				num[cnt].aa = x;
//				num[cnt].bb = y;
//				num[cnt].s = ss;
//				q.push(cnt);
//				cnt ++;
//				d[x][y] = t; //记录一下上一步 
//				flag[cnt - 1] = t;cout<<cnt-1<<ss <<"4: " << x << " " << y << "     ";
//			}
//			
//		}
//		
//		if (a1 > 0 && b1 < b) //A-B 
//		{
//			int p = b - b1;
//			if (a1 < p)
//			{
//				x = 0;
//				y = b1 + a1;
//			}
//			else
//			{
//				x = a1 - p;
//				y = b;
//			}
//			ss = "POUR(1, 2)";
//			if (d[x][y] == -1)
//			{
//				num[cnt].aa = x;
//				num[cnt].bb = y;
//				num[cnt].s = ss;
//				q.push(cnt);
//				cnt ++;
//				d[x][y] = t; //记录一下上一步 
//				flag[cnt - 1] = t;cout<<cnt-1<<ss <<"5: " << x << " " << y << "     ";
//			}
//			
//		}
//		
//		if (a1 < a && b1 > 0) //B - A;
//		{
//			int p = a - a1;
//			if (b1 < p)
//			{
//				x = 0;
//				y = b1 + a1;
//			}
//			else
//			{
//				x = a;
//				y = b1 - p;
//			}
//			ss = "POUR(2, 1)";
//			if (d[x][y] == -1)
//			{
//				num[cnt].aa = x;
//				num[cnt].bb = y;
//				num[cnt].s = ss;
//				q.push(cnt);
//				cnt ++;
//				d[x][y] = t; //记录一下上一步 
//				flag[cnt - 1] = t;cout<<cnt-1<<ss <<"6: " << x << " " << y << "     ";
//			}
//			
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	cin >> a >> b >> c;
//	
//	num[0].aa = 0;
//	num[0].bb = 0;
//	bfs();
//	cout << endl << endl;
//	for (int i = 1; i <= 30 ; i ++ )
//	{
//		cout << num[i].aa << " " << num[i].bb << " " << num[i].s<< endl;
//	}
//	return 0;
//} 

#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 200;
int d[N][N];
queue<int> q;
int cnt = 1;
int A, B, c;
int flag[N];

struct name{
	int a, b;
	string  s;
}num[N];

bool f = 0;

void bfs()
{
	memset(d, 0, sizeof d);
	memset(flag, 0, sizeof flag);
	
	d[0][0] = 1;
	flag[0]=0;
	q.push(0);
	while (!q.empty())
	{
		
		int t = q.front();
		q.pop();
		if (num[t].a == c || num[t].b == c)
		{ 
			f = 1;
			vector<int> ans;
			
			int v = t;
			while (v != 0)
			{
				ans.push_back(v);
				v = flag[v];
			}
			cout << ans.size() << endl;
			for (int j = ans.size() - 1; j >= 0; j -- )
			{
				cout << num[ans[j]].s << endl;
			}
			break;
		}
		//填满A
		if(!d[A][num[t].b])
		{
			d[A][num[t].b]= 1;
			num[cnt].a = A;
			num[cnt].b = num[t].b;
			num[cnt].s = "FILL(1)";
			flag[cnt] = t;
			q.push(cnt);
			cnt ++;
		}
		
		//填满B
		if(!d[num[t].a][B])
		{
			d[num[t].a][B] = 1;
			num[cnt].a = num[t].a;
			num[cnt].b = B;
			num[cnt].s = "FILL(2)";
			flag[cnt] = t;
			q.push(cnt);
			cnt ++;
		}
		
		//清空A
		if(num[t].a != 0 && !d[0][num[t].b])
		{
			d[0][num[t].b] = 1;
			num[cnt].a = 0;
			num[cnt].b = num[t].b;
			num[cnt].s = "DROP(1)";
			flag[cnt] = t;
			q.push(cnt);
			cnt ++;
		}
		
		//清空B
		if(!d[num[t].a][0] && num[t].b != 0)
		{
			d[num[t].a][0] = 1;
			num[cnt].a = num[t].a;
			num[cnt].b = 0;
			num[cnt].s = "DROP(2)";
			flag[cnt] = t;
			q.push(cnt);
			cnt ++;
		}
		
		//a - b
		
		int p = A - num[t].a;
		if (num[t].b != 0 && num[t].a != A)
		{
			if (p >= num[t].b && !d[num[t].a + num[t].b][0])
			{
				d[num[t].a + num[t].b][0] = 1;
				num[cnt].a = num[t].a + num[t].b;
				num[cnt].b = 0;
				num[cnt].s = "POUR(2,1)";
				flag[cnt] = t;
				q.push(cnt);
				cnt ++;
			}
			else if (p < num[t].b && !d[A][num[t].b - p])
			{
				d[A][num[t].b - p] = 1;
				num[cnt].a = A;
				num[cnt].b = num[t].b - p;
				num[cnt].s = "POUR(2,1)";
				flag[cnt] = t;
				q.push(cnt);
				cnt ++;
			}
		}
		
		//b - a
		if (num[t].a != 0 && num[t].b != B)
		{
			p = B - num[t].b;
			if (p >= num[t].a && !d[0][num[t].a + num[t].b])
			{
				d[0][num[t].a + num[t].b] = 1;
				num[cnt].a = 0;
				num[cnt].b = num[t].a + num[t].b;
				num[cnt].s = "POUR(1,2)";
				flag[cnt] = t;
				q.push(cnt);
				cnt ++;
			}
			else if (p < num[t].a && !d[num[t].a - p][B])
			{
				d[num[t].a - p][B] = 1;
				num[cnt].a = num[t].a - p;
				num[cnt].b = B;
				num[cnt].s = "POUR(1,2)";
				flag[cnt] = t;
				q.push(cnt);
				cnt ++;
			}
		}
		
	}
	
}

int main()
{
	cin >> A >> B >> c;
	bfs();
	if (!f) cout << "impossible" << endl;
	return 0;
}
