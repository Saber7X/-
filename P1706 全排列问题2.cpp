#include<bits/stdc++.h>
using namespace std;
int n;
bool st[50];
int ans[50];

void dfs(int u)
{
	if (u > n)
	{
		for (int i = 1; i <= n; i ++ )
		{
			printf("%5d", ans[i]);
		}
		cout << endl;
		return;
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		if (st[i] == 0)
		{
			ans[u] = i;//��������� 
			st[i] = 1;//���Ϊѡ��
			dfs(u + 1);
			st[i] = 0;//�ָ���Ϊѡ�� 
		}
	}
}


int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
