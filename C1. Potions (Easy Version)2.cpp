#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, a[2005] = {0}, f[205][205] = {0};
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	memset(f, -1, sizeof f);//����ֵ��-1����ֹ�в�����ѡ������������ڵ���0�Ͱ�-1�н�ȥ�� 
	for(int i = 0; i <= n; i ++ )
	{
		f[i][0] = 0;//��ֵΪ0��Ϊÿ���¼��һƿʱ���ֵ��׼�� 
	}
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= i; j ++ )
		{
			//��¼����ÿ��ѡ���ĵ�����ҩ����ֻҪ����0�Ϳ��Լ����� 
			if(f[i - 1][j - 1] >= 0)
			{
				f[i][j] = max(f[i][j], f[ i - 1][j - 1] + a[i]);
			}
			if(f[i - 1][j] >= 0)
			{
				f[i][j] = max(f[i][j], f[i - 1][j]);
			}
		}
	}
	for(int i = n; i >= 0; i -- )//��С����ö�٣���nƿҩˮʱ ��ֻҪ��������0������ѡ�����ǺϷ��� ������Ϊ�Ǵ�С�������Ե�һ���Ϸ��ľ�������ƿ�� 
	{
		if(f[n][i] >= 0)
		{
			cout << i << endl;
			break; 
		}
	}
	return 0;
}
