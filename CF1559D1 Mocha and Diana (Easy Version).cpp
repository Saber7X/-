#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int p[N], p1[N];
//p[]存储每个点的祖宗节点, size[]只有祖宗节点的有意义，表示祖宗节点所在集合中的点的数量

// 返回x的祖宗节点
int find(int x)
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}
int find1(int x)
{
    if(p1[x] == x) return x;
    return p1[x] = find1(p1[x]);
}

void hebing(int a, int b)
{
    a = find(a), b = find(b);
    p[a] = b;
}
void hebing1(int a, int b)
{
    a = find1(a), b = find1(b);
	p1[a] = b;
}

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	
	for (int i = 0; i <= N; i ++ ) 
	{
		p[i] = i;
		p1[i] = i;
	}
	
	for (int i = 1; i <= a; i ++ )
	{
		int x, y;
		
		cin >> x >> y;
		hebing(x, y);
	}
	
	for (int i = 1; i <= b; i ++ )
	{
		int x, y;
		cin >> x >> y;
		hebing1(x, y);
		
	}
	
	vector<pair<int, int> > ans;
	ans.clear();
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i + 1; j <= n; j ++ )
		{
			if (find(i) != find(j) && find1(i) != find1(j) ) 
			{
//				cout <<i << " " << j << "::: "<< find1(i) << " " << find1(j) << endl;
				ans.push_back({i, j});
				hebing(i, j);
				hebing1(i, j);
//				p[find(j)] = p[find(i)];
//				p1[find1(j)] = p1[find1(i)];
			}
		}
	}
	cout << ans.size() << endl;
	for (auto i : ans)
	{
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}
