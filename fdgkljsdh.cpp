#include<bits/stdc++.h> 
#define int long long

using namespace std;

const int N = 1e5 + 10;

int n, m;
int a[N];
int ans = 0;

bool flag;
bool st[N];

//struct name{
//	int c;
//	int p[N];
//	int v[N];
//}numm[N]; 

struct name{
	int c;
	vector<int> p;
	vector<int> v;
}numm[N]; 

struct zanshi{
	int point;
	int value;
}num[N]; 

bool cmp(zanshi a, zanshi b) 
{
	return a.value < b.value; 
}

//          ��     ��ǰ�ܷ���   ·�����ֵ 
void dfs(int u, int sum, int maxn)
{
	//����ܷ���������m 
	if (sum >= m)
	{
		flag = true;//˵����������� 
		ans = min(ans, maxn);//����С�Ĵ� 
		return;//��Ϊ·���ϵ����ֵֻ���ܸ��󲻿��ܸ�С 
	}
	
	st[u] = true; //��Ǹõ��߹��� 
	
	for (int i = 1; i <= numm[u].c; i ++ )
	{
//		if (!st[numm[u].p[i]] )//��������û���߹� 
//		{
			dfs(numm[u].p[i], sum + numm[u].v[i], max(maxn, numm[u].v[i]));
//		}
	}
}

signed main()
{
	cin >> n >> m;
	
	for (int i = 1; i <= n; i ++ ) scanf("%lld", &a[i]);
	
	for (int i = 1; i <= n; i ++ )//n��ʳ�� 
	{
		scanf("%lld", &numm[i].c);//����ÿ��ʳ���м�����ͨ��ʳ�� 
		
		for (int j = 1; j <= numm[i].c; j ++ )//����ÿ��ʳ����ͨ��ʳ�����ļ��� 
		{
			scanf("%lld", &num[j].point);
			//cin >> num[j].point;//���� 
			num[j].value = a[num[j].point];//���ݴ��ÿ��ʳ�õķ�����ֵ 
		}
		
		sort(num + 1, num + 1 + numm[i].c, cmp);//���ݴ��а�ÿ����Ȩ��С�������� 
		
		numm[i].p.push_back(0);// ͬ�� 
		numm[i].v.push_back(0);//��1��ʼ�����ȼ�һλ 
		
		for (int j = 1; j <= numm[i].c; j ++ )
		{
//			numm[i].p[j] = num[j].point;
//			numm[i].v[j] = num[j].value;
			numm[i].p.push_back(num[j].point);//���ź��������Ž��������� 
			numm[i].v.push_back(num[j].value);//ͬ�� 
		}
	}	
	
	ans = 9999999999; //��Ҫ����Сֵ 
	dfs(1, a[1], a[1]);//����ӵ�һ���������ӵ����е����һ�㿪ʼ����Ϊ��һ�����߹�������sum��a[1]��ʼ�� ��ΪҪ��·���ϵ����ֵ���Դ���a[1] 
	
	if (flag) cout << ans << endl;
	else cout << "-1" << endl;
	
	return 0;
}
