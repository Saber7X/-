#include<bits/stdc++.h>
using namespace std;
const int N = 10005, M = 200005;

int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N];//��ʾ���Ӷ�Ӧ������
bool st[N];

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx ++;
	
}

bool find(int x)//���Ʋ��鼯�����������������п��ϵ����ӣ��������Ƿ���
{
	for(int i = h[x]; i != -1; i = ne[i]) 
	{
		int j = e[i];
		if(!st[j])//����������û�б��ҹ�
		{
			st[j] = true;
			if(match[j] == 0 || find(match[j])) //���������Ϊ������߸����ӵ��������Ի���̥����ô�����ӿ��Ժ͵�ǰ������һ��
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
		memset(st, false, sizeof st);//��ʼ��״̬
		if(find(i)) ans ++; 
	}
	cout << ans << endl;
	return 0;
}
