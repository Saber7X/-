#include<bits/stdc++.h>
using namespace std;
const int N = 1010;

int n;
int a[N], f[N], g[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++ )
	{
		f[i] = 1;//�Լ�������һ�� 
		for(int j = 1; j < i; j ++ )
		{
			if(a[j] < a[i])//���f[j]������Է�f[i] ;
			{
				//f[i] = max(f[j] + 1, f[i]);//�����������е������д��п����Ѿ�������ֵ������ ��ǰ����f[j]��β�������� 
				if(f[i] < f[j] + 1)
				{
					f[i] = f[j] + 1;
					g[i] = j;//��¼�Ǵ��ĸ�״̬ת������ ����������һ�������ģ���Ϊ�����ģ������ľͲ�������� 
					//����һ��ֵΪ�±꣬��¼��һ����±�				
				}				
			}
		}
	}
	int ans = -0x3f3f3f3f, k = 1;
	for(int i = 1; i <= n; i ++ )
	{
		if(f[k] < f[i])
		{
			k = i;
		}
	} 
	cout << f[k];
	for(int i = 0 ; i < f[k]; i ++ )
	{
		cout << a[k] << " ";
		
		k = g[k];//һ��һ�������Ҹ������е���һ���� 
	} 
	return 0;
}
