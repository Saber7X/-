#include<bits/stdc++.h> 
using namespace std;
const int N = 1010, mod = 1e9 + 7;
int n, f[N];

int main()
{
	cin >> n;
	f[0] = 1;//��ʼ�������Ϊ0ʱ��һ��ѡ�� 
	for(int i = 1; i <= n; i ++ )//ö��1-n����Ʒ 
	{
		for(int j = i; j <= n; j ++ )//ö�����1-n 
		{
			f[j] = (f[j] + f[j - i]) % mod;//��ǰ����Ϊjʱ��������ڲ�ѡ��i����Ʒf[j]����ѡ��i����ƷҲ����˵��ǰi-1����Ʒʱ���Ϊj - iʱ��ѡ������i����Ҳ������ǰi-1����Ʒʱ���Ϊj - iʱ��ѡ����Ȼ����ϲ�ѡi��ѡ�� ���������Ϊjʱ���е�ѡ�� 
		}
		 
	} 
	cout << f[n];
	return 0;
}
