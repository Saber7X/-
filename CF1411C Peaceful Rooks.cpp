//���鼯ά��,��Ϊ��ĺ������겻���ͻ������Ĭ����m��һ������һ��������ô������һ 
#include<bits/stdc++.h>
using namespace std;
const int N = 100050;
int p[N];
int t;
int find(int x)
{
	if(p[x] == x) return x;
	else return p[x] = find(p[x]);
}
void addd(int a, int b)
{
	p[a] = b;
}
int main()
{
	cin >> t;
	while(t -- )
	{
		int n, m;
		cin >> n >> m;
		int cnt = 0, add = 0;
		for(int i = 1; i <= n; i ++ ) p[i] = i;
		for(int i = 1; i <= m; i ++ )
		{
			int x, y;
			cin >> x >> y;
			if(x == y)  continue;
			x = find(x), y = find(y);
			if(x != y) addd(x, y);
			else add ++;
			cnt ++;
		}
		cout << cnt + add << endl;
	}
	return 0;
}
