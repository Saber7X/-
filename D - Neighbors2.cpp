#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int d[N];
int f[N];
int p[N]; //�洢ÿ��������ڽڵ�

// ����x�����ڽڵ�
int find(int x)
{
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}




int main()
{
	int n, m;
	cin >> n >> m;
	bool f = 0;
	// ��ʼ�����ٶ��ڵ�����1~n
	for (int i = 1; i <= n; i ++ ) p[i] = i;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b; cin >> a >> b;
		// �ϲ�a��b���ڵ��������ϣ�
		if (find(a) == find(b))
		{
			cout << "No" << endl;
			return 0;
		}
		p[find(a)] = find(b);
		d[a] ++;
		d[b] ++;
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (d[i] > 2) 
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
