#include<bits/stdc++.h> 
using namespace std;
const int N = 100005;

int e[N], ne[N], h[N], idx;
int q[N], d[N];
int n, m;

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}

bool topsort()
{
	int hh = 0, tt = -1;
	for(int i = 1; i <= n; i ++ )//ö�ٵ� 
	{	
		//int j = e[j];
		if(d[i] == 0)//�����Ϊ0�ĵ�Ž����� 
		{
			q[++tt] = i;
		}
	}
	while(hh <= tt)//��ÿ����ÿ�����Ϊ0�ĵ�����ĵ���в��� 
	{
		int t = q[hh ++];
		for(int i = h[t]; i != -1; i = ne[i] )
		{
			int j = e[i];
			d[j] --;//��Ϊ��һ���������Ϊ0�����Բ��������ƣ�����������һ������Ⱦ� --
			if(d[j] == 0)//���Ϊ0��˵���ź����ˣ��ͷŽ����� 
			{
				q[++tt] = j;
			}
		}
	}
	return tt == n - 1;
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	for(int i = 1; i <= m; i ++ )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		d[b] ++;
	}
	if(topsort())
	{
		for(int i = 0; i < n; i ++ )
		{
			cout << q[i] << " ";
		}
	}
	else
	{
		cout << " -1 ";
	}
	return 0;
}
