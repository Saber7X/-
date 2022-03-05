#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5 + 10;	
		
struct name{
	int a, b, w;
}num[N];

int p[N]; //�洢ÿ��������ڽڵ�

// ����x�����ڽڵ�
int find(int x)
{
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

bool cmp(name a, name b) 
{
	return a.w < b.w;
}

signed main()
{
	int t; cin >> t;
	
	while (t -- )
	{
		int n, m, k;
		cin >> n >> m >> k;
		for (int i = 1; i <= m; i ++ )
		{
			p[i] = i;
			scanf("%lld%lld%lld", &num[i].a, &num[i].b, &num[i].w);
		}
		
		sort(num + 1, num + 1 + m, cmp);
		
		int now = 0;
		int ans = 0;
		
		for (int i = 1; i <= m; i ++ )
		{
			int a = num[i].a;
			int b = num[i].b;
			int w = num[i].w;
			
			if (find(a) == find(b)) continue;
			if (now == n - k && w != num[i - 1].w) break; //����˵n == k��Ҫ���ж��ټӣ�����֮ǰ�Ż�һֱWA 
			
			p[find(a)] = find(b);//�ϲ�
			now ++; 
			ans = w;
			
		}
		if (now == n - k) cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}
