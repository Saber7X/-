#include<bits/stdc++.h>
using namespace std;
const int N = 10005, M = 200005;

int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N];//表示妹子对应的男生
bool st[N];

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx ++;
	
}

bool find(int x)//类似并查集，遍历的是男生所有看上的妹子，看妹子是否单身
{
	for(int i = h[x]; i != -1; i = ne[i]) 
	{
		int j = e[i];
		if(!st[j])//如果这个妹子没有被找过
		{
			st[j] = true;
			if(match[j] == 0 || find(match[j])) //如果该妹子为单身或者该妹子的男生可以换备胎，那么该妹子可以和当前男生在一起
			{
			 	match[j] = x;
				 return true;	
			}
		} 
	}
	return false;
} 

int main()
{
	cin >> n1 >> n2 >> m;
	memset(h, -1, sizeof h);
	for(int i = 1; i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
	}
	int ans = 0;
	for(int i = 1; i <= n1; i ++ )
	{
		memset(st, false, sizeof st);//初始化状态
		if(find(i)) ans ++; 
	}
	cout << ans << endl;
	return 0;
}
