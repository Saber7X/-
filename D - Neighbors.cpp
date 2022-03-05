#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 1e5 + 10, M = N * 2;
int h[N * 2], e[M], ne[M], idx;
int q[M * 2];
int n, m;


int p[N]; //�洢ÿ��������ڽڵ�

// ����x�����ڽڵ�
int find(int x)
{
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

// ��ʼ�����ٶ��ڵ�����1~n


// �ϲ�a��b���ڵ��������ϣ�



void add(int a, int b)  // ���һ����a->b
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}
int d[M * 2];
int dd[M * 2];
bool topsort()
{
    int hh = 0, tt = -1;

    // d[i] �洢��i�����
    for (int i = 0; i <= n; i ++ )
    {
    	if (!d[i]) q[ ++ tt] = i;
            
	}
	
    while (hh <= tt)
    {
        int t = q[hh ++ ];

        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (-- d[j] == 0)
                q[ ++ tt] = j;
        }
    }

    // ������е㶼����ˣ�˵�������������У����򲻴����������С�
    return tt == n;
}

signed main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ) p[i] = i;
	for (int i = 1; i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		d[b] ++;
		dd[a] ++;
		dd[b] ++;
		p[find(a)] = find(b);
	}
	bool f = 0;
	int cnt = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (dd[i] == 2) cnt ++;
		if (dd[i] > 2 && !f)
		{
			f = 1;
			cout << "No";
			return 0;
		}
	}
	if (cnt > n - 2)
	{
		cout << "No"; 
		return 0;
	}
	set<int> qq;
	for (int i = 1; i <= n; i ++ )
	{
		qq.insert(find(i));
	}
	for(auto i : qq)
	{
//		cout << i << " ";
		add(0, i);
		d[i] ++;
	}
	if (topsort()) cout << "Yes" << endl;
	else cout << "No" << endl;
    
	return 0;
}
