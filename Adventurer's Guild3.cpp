#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 310;
int n, h, s;//�����������ܽ���ֵ�������� 
int a, b, c; 
int f[N][N];

signed main()
{
	cin >> n >> h >> s;
	
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a >> b >> c;
		
		for(int j = h; j > a; j -- )//����ֵ������Ϊ0
		{
			for(int k = s; k >= 0; k -- )//����ֵ 
			{
				if(k - b >= 0)//�������ֵ���� 
				{
					f[j][k] = max(f[j][k], f[j - a][k - b] + c);
				}
				else if(j - a + k - b > 0 )//�������ֵ�����þ�������ֵ����Ҫ������ֵ�����������������жϣ���Ϊ��ʱ����ֵ��0����������һ��� ����ֵΪ0��������ж� 
				{
					f[j][k] = max(f[j][k], f[j - a + k - b][0] + c);  //����ֵ��0 
				}
			} 
		} 
	}
	cout << f[h][s] <<endl;
	
	return 0;
}
