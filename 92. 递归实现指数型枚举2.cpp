#include<bits/stdc++.h> 
using namespace std;
int n;
bool st[20];//��ǰ��ѡ��true��/��ѡ (false)

//��ǰѡ���ĸ�����  
void dfs(int u)
{
	if (u > n) 
	{
		for (int i = 1; i <= n; i ++ )
		{
			if (st[i] == true)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		return;
	}
	
	//ѡ
	st[u] = true;
	dfs(u + 1);
	
	
	//��ѡ 
	st[u] = false;
	dfs(u + 1);
	
	//(return; )
}

int main()
{
	cin >> n;
	dfs(1);
	
	return 0;
}
