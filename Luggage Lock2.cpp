#include<bits/stdc++.h>
using namespace std;

int start[4] = {0, 0, 0, 0};
int End[4] = {9, 9, 9, 9}; 

struct node
{
    int f[4];
};

string change(int a[])
{
    string s = "";
    for (int i = 0; i < 4; i ++ )
    {
        s.push_back(a[i] + '0');
    }
    return s;
}

unordered_map<string, int> ans;
int caozuo[20][4] ={{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 1, 0}, {1, 1, 1, 1}, {0, 1, 0, 0},  {0, 1, 1, 0}, {0, 1, 1, 1}, {0, 0, 1, 0}, {0, 0, 1, 1}, {0, 0, 0, 1}, {-1, 0, 0, 0}, {-1, -1, 0, 0}, {-1, -1, -1, 0}, {-1, -1, -1, -1}, {0, -1, 0, 0},  {0, -1, -1, 0}, {0, -1, -1, -1}, {0, 0, -1, 0}, {0, 0, -1, -1}, {0, 0, 0, -1}};

void bfs()
{
	queue<node> q;
	node head;
	memcpy(head.f, start, sizeof start);
	q.push(head);
	
	while (!q.empty())
	{
		node t = q.front();
//		cout << change(t.f) << endl;
		int d = ans[change(t.f)];
		q.pop();
		for (int i = 0; i < 20; i ++ )
		{
			node newnode;
			memcpy(newnode.f, t.f, sizeof t.f);
			for (int j = 0; j < 4; j ++ )
			{
				newnode.f[j] += caozuo[i][j];
				newnode.f[j] = newnode.f[j] + 10 ;
				newnode.f[j] %= 10;
			}
			bool flag = 0;
			for (int j = 0; j < 4; j ++ )
			{
				if (newnode.f[j] > 9 || newnode.f[j] < 0) 
				{
					flag = 1;
					break;
				}
			}
			if (flag) continue;
			string tt = change(newnode.f);
			if (!ans.count(tt))
			{
				ans[tt] = d + 1;
				q.push(newnode);
			}
		}
	}
}

int main()
{
	int t; cin >> t;
	bfs();
	while (t -- )
	{
		string a, b;
		cin >> a >> b;
		for (int i = 0; i < 4; i ++ )
		{
			End[i] = ((a[i] - '0') - (b[i] - '0') + 10) % 10;
		}
//		cout << change(End) << endl;
		cout << ans[change(End)] << endl;
	}
	return 0;
}
