#include<bits/stdc++.h>
using namespace std;
const int N = 150;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, a, b; cin >> n >> a >> b;
		int num[n + 3] = {0}; //��������
		 
		memset (num, -1, sizeof num);//-1�Ǵ��� 
		
		num[1] = a, num[n] = b;//��λ���ȥ
		 
		map<int, int> f;//��������û�б�ʹ�ù�
		 
		f[a] = 1;
		f[b] = 1;
		
		int cc = n - 1;
		
		//Ϊ�˱�֤��ߵ������ֵ��С�Ŀ�ʼȡ 
		for (int i = 1; i <= n; i ++ )
		{
			if (cc == n / 2) break;
			if (f[i] == 0 && i < b)
			{
				num[cc] = i;
				f[i] = 1;
				cc--;
			}
		}
		
		//�ұ߰�˳�������� 
		cc = 2;
		for (int i = 1; i <= n; i ++ )
		{
			if (cc > n / 2) break;
			if (f[i] == 0 && i > a)
			{
				num[cc] = i;
				f[i] = 1;
				cc++; 
			}
		}
		
		bool tt = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (num[i] == -1) 
			{
				tt = 1;
				break;
			}
		}
		if (!tt) for (int i = 1; i <= n; i ++ ) cout << num[i] << " ";
		else cout << "-1";
		cout << endl;
	}
	return 0;
} 
